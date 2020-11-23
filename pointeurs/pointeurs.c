#include <stdio.h>

/*
    Pointeur : variable contenant l'adresse d'une autre variable
       %d -> affiche une adresse de variable ou pointeur
       
        [VARIABLEs]
        maVariable : valeur de la variable
        &maVariable: adresse de la variable

        [POINTEURS]
ex : *monPointeur = NULL (valeur par défault) ou *monPointeur = &maVariable 
(délaration et initialisation d'un pointeur)

        monPointeur : adresse de la variable pointée
        *monPointeur: valeur de la variable pointée
        &monPointeur: adresse du pointeur
*/

int   inverser_nombres(int *pt_nb1, int *pt_nb2)

{
    int temporaire = 0; 

    temporaire = *pt_nb2;
    *pt_nb2 = *pt_nb1;
    *pt_nb1 = temporaire;
    
}

int main(void)
{
    int nombreA = 15;
    int nombreB = 52;

// int *pointeurSurNombreA = &nombreA;
// int *pointeurSurNombreB = &nombreB;

    printf("Avant : A = %d et B = %d\n", nombreA, nombreB);
    inverser_nombres(pointeurSurNombreA, pointeurSurNombreB);
    printf("Apres : A = %d et B = %d\n", nombreA, nombreB);

    return 0;
}