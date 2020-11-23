#include <stdio.h>

int main(void)
{

/*
     maVariable : contenue de la variable (ex var = 25)
     &maVariable : adresse où est stockée variable
*/
   int ageUtilisateur = 0;
   printf ("quel age avez-vous ? ");
   scanf ("%d", &ageUtilisateur); 
   //fonction risqué mais rester dans les limites pour sécurité

   printf("Vous avez %d ans.\n", ageUtilisateur);

    return 0;
}
