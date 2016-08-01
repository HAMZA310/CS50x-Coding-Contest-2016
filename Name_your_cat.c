#include<stdio.h>
#include<cs50.h>
#include<string.h>
#define num strlen(s)
int main ()
{
    int num = GetInt ();
    string s =  GetString ();
    int k = num;
  
    for (int a = 0; a < num; a++ )
    {
        
        //int b = num -1;
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
    for (int g = 0, m = strlen(s); g < m; g++)
    printf("%c", s[g]);
    printf("\n");
}