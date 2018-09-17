#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "anagramme.h"


int main ()
{
char *C1, *C2;

C1 = readline ("Entre la chaine 1 ");
C2 = readline ("Entre la chaine 2 ");
printf("%s et %s %s 2 anagrammes\n",C1,C2,Anag(C1,C2)?"sont":"ne sont pas");

free(C1);
free(C2);
return 0;


}