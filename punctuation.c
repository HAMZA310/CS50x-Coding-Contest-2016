/**
 * Write a program that, given a line of text, T, via standard input,
 * prints it to standard output with the following modifcations:
 * After every period (.) and comma (,), a space must be added.
 * The first letter after every period must be capitalized.
 **/



#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "cs50.h"

int main(void)
{
    string s = GetString();
    
    for ( int x = 0, n = strlen (s); x < n; x++)
        {
            printf("%c", s[x]);
            
            if (s[x] == '.')
            {
                if ((s[(x+1)] <=122) && (s[(x+1)] >=97))  //if lowercase, capitalizing...
                s[x + 1] = s[x+ 1] -32;
               
                else 
                s[x+1] = s[x+1];
            }
     
     
            if ((s[x] == ',') || s[x] == '.')
            printf(" ");
                
        }
        
        printf("\n");
    
    
}
