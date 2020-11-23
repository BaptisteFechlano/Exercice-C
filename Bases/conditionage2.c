#include <stdio.h>

int main(void)
{

/*
    == : égal à 
    != : différent de
    < : plus grand que
    <= : plus petit ou égal à
    >= : plus grand ou égal à 

    && : ET les deux conditions doivent être remplies
    || : OU une seule des conditions est satisfaite
    !  : NOT (n'est pas)
*/
    int age = 25;
    
    if (age < 1)
  {
        printf("Tu n'es pas ne.\n");
    }
    else if/*(*/(age >= 1 && age <= 100) // || age == 375)
    {
            printf ("tu as un age compris entre 1 et 100 ans !\n");
    }
    else
    {
        printf("Waaaw GG plus de 100 ans !!! \n");
    }

    return 0;
}