/**
 * PROBLEM DESCRIPTION:
 * 
 * Write a program that takes in three values via standard input: a starting bank account balance, B, in dollars;
 * an annual interest rate, R; and a number of years, N. 
 * The program should print out the value of the resulting bank account balance
 * after B has received interest at rate R calculated annually for N years, rounded to the nearest cent.
 * For example, if B is 280.00, R is 0.01 (representing a 1% interest rate), and N is 3,
 * then your program should print out 288.48, which represents the final balance
 * after an initial balance of $280 receives 1% interest calculated once per year for three years.
 * Expect B and R to be floating-point values and N an integer.
 **/





#include <stdio.h>
#include "cs50.h"

int main ()
{
    float b, r;
    int n;
   
    b = GetFloat ();
    r = GetFloat ();
    n = GetInt ();

   float array[n];
   array[0] = b + (b * r);
     
   for (int j = 0 ; j < n; j++)
        {
        array[j+1] = array[j] + (array[j] * r);
        }

   printf("%.2f\n", array[n-1]);
     
}
