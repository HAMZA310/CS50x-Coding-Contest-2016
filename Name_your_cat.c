/**
 * Problem Description:
 * Between the words cat and kitten, there are seven unique characters (a, c, e, i, k, n, and t),
 * because only those characters appear in the two words.
 * Given a string (i.e., a cat's name), reverse all instances of those characters,
 * while leaving the other 19 letters in the alphabet as they are.
 * Each of those 19 characters, if they appear in the name, must remain at the same index.
 *If there is only one character to reverse, leave it in the same location.
**/


#include<stdio.h>
#include<cs50.h>
#include<string.h>

int main ()
{
    int num = GetInt ();
    string s =  GetString ();
    int k = num;
  
    for (int a = 0; a < num; a++ )
    {
       for (int b = k - 1; b > a; b--)
       {
            if (((s[a] == 'a') || (s[a] == 'c') || (s[a] == 'e') || (s[a] == 'i') || (s[a] == 'k') || (s[a] == 'n') || (s[a] == 't'))   &&    ((s[b] == 'a') || (s[b] == 'c') || (s[b] == 'e') || (s[b] == 'i') || (s[b] == 'k') || (s[b] == 'n') || (s[b] == 't')))
            {
                char temp = s[a];
                s[a] = s[b];
                s[b] = temp;
                
                k = b;
                break;
            } 
     
        }
      
    }
    
    //printing... 
    for (int g = 0, m = strlen(s); g < m; g++)
    printf("%c", s[g]);
    printf("\n");
}
