#include <stdio.h>

int main(void)
{

/*
     maVariable : contenue de la variable (ex var = 25)
     &maVariable : adresse où est stockée variable
*/
     signed char lettre = 'A';

     printf ("Entrez une lettre: ");
     scanf("%c", &lettre);

     printf("lettre choisie => %c\n", lettre);
     
    return 0;
}
