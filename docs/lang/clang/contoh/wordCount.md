# Word Count 

## Intro 
Given a phrase, count the occurrences of each _word_ in that phrase.

For the purposes of this exercise you can expect that a _word_ will always be one of:

1. A _number_ composed of one or more ASCII digits (ie "0" or "1234") OR
2. A _simple word_ composed of one or more ASCII letters (ie "a" or "they") OR
3. A _contraction_ of two _simple words_ joined by a single apostrophe (ie "it's" or "they're")

When counting words you can assume the following rules:

1. The count is _case insensitive_ (ie "You", "you", and "YOU" are 3 uses of the same word)
2. The count is _unordered_; the tests will ignore how words and counts are ordered
3. Other than the apostrophe in a _contraction_ all forms of _punctuation_ are ignored
4. The words can be separated by _any_ form of whitespace (ie "\t", "\n", " ")

For example, for the phrase `"That's the password: 'PASSWORD 123'!", cried the Special Agent.\nSo I fled.` the count would be:

```text
that's: 1
the: 2
password: 2
123: 1
cried: 1
special: 1
agent: 1
so: 1
i: 1
fled: 1
```

- Note that the tests for this exercise expect the output words to be proper C strings. That is, they should be NUL terminated. See https://en.wikipedia.org/wiki/C_string_handling

## The Code 
=== "word_count.c"
    ```c
    #include "word_count.h"
    #include "string.h"
    #include "stdlib.h"
    #include "ctype.h"
    #include "stdio.h"

    int count_words(const char *sentence, word_count_word_t *words)
    {
        int lenght = strlen(sentence);

        char var[MAX_WORD_LENGTH] = {0};

        //strncpy(var, sentence, lenght);
        int i = 0;
        for (i = 0; i < lenght; i++)
        {
            var[i] = tolower(sentence[i]);
        }
        strcat(var, " ");

        for (i = 0; i < (int)strlen(var); i++)
        {
            if (var[i] == '\'' && var[i - 1] == ' ')
            {
                var[i] = ' ';
                continue;
            }
            if (var[i] == ' ' && var[i - 1] == '\'')
            {
                var[i - 1] = ' ';
                continue;
            }
            if ((isalnum(var[i]) == 0 && var[i]!='\'') && isblank(var[i]) == 0)
                var[i] = ' ';
        }

    //    puts(var);
        char *var01 = strtok(var, " ");
        int var02 = 0;
        while (var01)
        {
            int ii = 0;
            for (i = 0; i < var02; i++)
            {
                if (strcmp(words[i].text, var01) == 0)
                {
                    words[i].count += 1;
                    ii = 1;
                    break;
                }
            }
            if (ii == 1)
            {
                var01 = strtok(NULL, " ");
                continue;
            }
            strcpy(words[var02].text, var01);
            words[var02].count = 1;
            var01 = strtok(NULL, " ");
            var02++;
        }
        return var02;
    }
    ```
=== "word_count.h"
    ```c
    #ifndef WORD_COUNT_H
    #define WORD_COUNT_H

    #define MAX_WORDS 20            // at most MAX_WORDS can be found in the test input string
    #define MAX_WORD_LENGTH 50      // no individual word can exceed this length

    // results structure
    typedef struct word_count_word {
    char text[MAX_WORD_LENGTH + 1];      // allow for the string to be null-terminated
    int count;
    } word_count_word_t;

    #define EXCESSIVE_LENGTH_WORD     -1
    #define EXCESSIVE_NUMBER_OF_WORDS -2

    // count_words - routine to classify the unique words and their frequency in a sentence
    // inputs:
    //    sentence =  a null-terminated string containing that is analyzed
    //
    // outputs:
    //    words = allocated structure to record the words found and their frequency
    //    uniqueWords - number of words in the words structure
    //           returns a negative number if an error.
    //           words will contain the results up to that point.
    int count_words(const char *sentence, word_count_word_t * words);

    #endif
    ```