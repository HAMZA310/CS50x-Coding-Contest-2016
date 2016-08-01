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
              
            
              if ((s[(x+1)] <=122) && (s[(x+1)] >=97))
               s[x + 1] = s[x+ 1] -32;
               else 
               s[x+1] = s[x+1];
            }
     
     if ((s[x] == ',') || s[x] == '.')
         {
           // isupper (s[x+1]);
            printf(" ");
        
         }
       
   
       
   }
       
         printf("\n");
    
    

}