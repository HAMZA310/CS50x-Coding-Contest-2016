#include <stdio.h>

#include "cs50.h"

int main(void)
{
    int n = GetInt ();
 if(n%100 == 0)
 {
     if (n%400 == 0)
     printf("Leap Year\n");
     else 
     printf("Not Leap Year\n");
     
 }
    else if (n%4 == 0)
{
         printf("Leap Year\n");

}    
    else 
    printf("Not Leap Year\n");

}
    