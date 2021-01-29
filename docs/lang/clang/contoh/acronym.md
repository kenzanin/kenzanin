# Acronim

## Intro 
Convert a phrase to its acronym.

Techies love their TLA (Three Letter Acronyms)!

Help generate some jargon by writing a program that converts a long name like Portable Network Graphics to its acronym (PNG).

## The Code 

=== "acronym.c"
    ```c
    #include "acronym.h"
    #include "string.h"
    #include "ctype.h"
    #include "stdio.h"
    #include "stdlib.h"

    char *abbreviate(const char *phrase)
    {
        if(phrase==NULL) return NULL;
        size_t length= strlen(phrase);
        if(length==0)return NULL;

        char var[80]={0};
        strncpy(var,phrase,length);

        size_t i;
        for(i=0;i<length;i++)
        {
            if(var[i]== '-' || var[i]=='_')
            var[i]=' ';
        }

        char *token=strtok(var," ");
        
        static char *var02;
        var02=malloc(length);
        memset(var02,0,length);

        int ii=0;
        while (token)
        {
            //puts(token);
            var02[ii]=toupper(token[0]);
            ii++;
            token = strtok(NULL," ");
        }
        //puts(var02);
        return var02;
    }
    ```
=== "acronym.h"
    ```c
    #ifndef ACRONYM_H
    #define ACRONYM_H

    char *abbreviate(const char *phrase);

    #endif 
    ```