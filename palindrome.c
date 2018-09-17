#include <stdio.h>
#include <string.h>
#include <readline/readline.h>
#include <readline/history.h>
#include "palindrome.h"

char* palindrome(string s)
{
 
    int i=0, j;
    scanf("%19s",s);
    j=strlen(s)-2;
    while (i<j && s[i]==s[j]) { i++; j--;}
    return s[i]==s[j]?"%s est un palindrome":"%s n'est pas un palindrome";
   
}
