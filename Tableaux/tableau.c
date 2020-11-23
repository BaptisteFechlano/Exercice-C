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

#define TAILLE_TAB 5

int *creer_tableau(void);
void afficher_tableau(int tableauMachin[], int taille);

/*-------------------------------------------------*/

int main(void)
{
    int i;
    int *tableau = creer_tableau();

    afficher_tableau(tableau, TAILLE_TAB);

    printf("\n\n");
    tableau[2] = -5;

    afficher_tableau(tableau, TAILLE_TAB);

    return 0;
}

/*-------------------------------------------------*/

int *creer_tableau(void)
{
    static int tableau_entier[5];
    int i;

    for(i = 0; i < 5 ; i++)
        tableau_entier[i] = i * 3;
    
    return tableau_entier;
}

/*-------------------------------------------------*/

void afficher_tableau(int tableauMachin[], int taille)
{
    int i;

    for(i = 0 ; i < taille ; i++)
        printf("[%d] ", tableauMachin[i]);
}