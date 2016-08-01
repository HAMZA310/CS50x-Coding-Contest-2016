#include <stdio.h>
#include "cs50.h"




int main ()
{
    float b, r;
    int n;
   do
   { b = GetFloat ();}
    while (b<0);
    do{
        
    
     r = GetFloat ();}
    while (r<0);
    do{
     n    = GetInt ();}
    while (n<0);

   
      float array[n*2];
      array[0] = b + (b * r);
     for (int j = 0 ; j < n; j++)
     {
      array[j+1] = array[j] + (array[j] * r);
    
  
     }
     printf("%.2f\n", array[n-1]);
}