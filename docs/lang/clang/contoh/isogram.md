# Isogram

## Intro 
Determine if a word or phrase is an isogram.

An isogram (also known as a "nonpattern word") is a word or phrase without a repeating letter, however spaces and hyphens are allowed to appear multiple times.

Examples of isograms:

* lumberjacks
* background
* downstream
* six-year-old

The word isograms, however, is not an isogram, because the s repeats.

## The Code
=== "isogram.c"
    ```c
    #include "isogram.h"
    #include "string.h"
    #include "ctype.h"


    bool is_isogram(const char phrase[])
    {
        int length;
        if(phrase==NULL)return false;

        for(length=0;phrase[length]!='\0';length++);
        if (length==0)return true;

        int i;
        for(i=0;i<length;i++){
            int ii;
            if( isalpha(phrase[i])==false)continue;
            for(ii=i+1;ii<length;ii++)
            {
                if(tolower(phrase[i])==tolower(phrase[ii])) return false;
            }
        }

        return true;
    }
    ```
=== "isogram.h"
    ```c
    #ifndef ISOGRAM_H
    #define ISOGRAM_H

    #include <stdbool.h>

    bool is_isogram(const char phrase[]);

    #endif 
    ```
