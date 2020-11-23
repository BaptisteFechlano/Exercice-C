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
        *(tableau + X) : élément d'indice X // plus très utilisé

    (NOTE)
        tableau[5] même chose que -> *(tableau + 5)

*/

#define NOMBRE_LIGNE 3
#define NOMBRE_COLONNES 2

int main(void)
{
   int damier[NOMBRE_LIGNE][NOMBRE_COLONNES] = { {1, 2},{3, 4},{5, 6} };
    int i, j;

    for(i = 0 ; i < NOMBRE_LIGNE ; i++)
        for(j = 0 ; j < NOMBRE_COLONNES ; j++)
            printf("Element indice [%d][%d] = %d\n", i, j, damier[i][j]);

    return 0;
}
