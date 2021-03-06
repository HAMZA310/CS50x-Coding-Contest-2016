/**
 * PROBLEM DESCRIPTION:
 * 
 * Write a program that, given an odd integer, N, in [3, 23],
 * draws a box (out of * characters) of height N and width N with an X in the middle.
 * That is, the diagonals of the box should be drawn with * characters.
 * For example, 5 should give you:
 *   ***** 
 *   ** **  
 *   * * *  
 *   ** **  
 *   *****
 **/



#include<stdio.h>
#include<cs50.h>


int main ()
{
    int n = GetInt();
    if ((n % 2 == 0) || (n < 3 || n > 23))
    {
        return 1;
    }


    for  (int k = 0; k < n; k++)
         {
             for (int i = 0; i < n; i++)
             {
                if ((k != 0) && (k != n-1) && (i != 0) && (i != n-1))
                {
                     if ((k != i) && ((n - i) != (k + 1)))
                     {
                      printf(" ");
                      continue;
                      }
                }
                printf("*");
             }           


         printf("\n");
        }   
        
}
