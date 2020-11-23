#include <stdio.h>


/*
    [déclaration tableau]
    <type> <nom_tableau>|X]; //Déclare avec valeurs aléatoires

    [Initialisation]
        tableau[5] = {valeur1, valeur2, valeur3, valeur4, valeur5};
        tableau[5] = {0}; //toute les valeurs seront à 0
        tableau[5] = {4}; //première case à 4 le reste à 0 !

    [Accès tableau]
        tableau[X]     : élément d'indice X (X+1 ième élément du tableau)

        tableau        : adresse du tableau
        *tableau       : premier élément du tableau
        *(tableau + X) : élément d'indice X

    (NOTE)
        tableau[5] même chose que -> *(tableau + 5)

*/

#define TAILLE_TAB 5

int main(void)
{
    int tableau[TAILLE_TAB] = {16,84, -2, 188, 3};
    int i;

    for(i = 0 ; i < TAILLE_TAB ; i++)
        printf("[%d]", tableau[i]);

    printf("\n\n");
    tableau[2] = -5; //modification de la valeur 3 du tableau

    for(i = 0 ; i < TAILLE_TAB ; i++)
        printf("[%d]", tableau[i]);

    return 0;
}