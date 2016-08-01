/**
 * Write a program that, given a year, Y, as an integer via standard input,
 * prints via standard output Leap Year if Y is a leap year, and Not Leap Year if Y is not a leap year.
 * Recall that:
 * A year is a leap year if it is a multiple of four (2004, 2008, and 2012 are all leap years).
 * The exception to this rule is that a year which is a multiple of 100
 * and also not a multiple of 400 is not a leap year. For example, 1800 and 1900 are not leap years,
 * but 2000 is a leap year (because it is a multiple of 400).
 **/ 



#include <stdio.h>
#include "cs50.h"

int main(void)
{
    int n = GetInt ();
    if (n%100 == 0)
         {
            if (n%400 == 0)
            printf("Leap Year\n");
     
            else 
            printf("Not Leap Year\n");
         }
         
         
   
    else if (n%4 == 0)
    printf("Leap Year\n");

    else 
    printf("Not Leap Year\n");

}
    
