#include <stdio.h>
#include <stdlib.h>

/*
    sizeof(<donnee>)            : retourne la taille en octets d'une donnée
    malloc(<taille_en_octets>)  : allouer dynamiquement en zone mémoire
    free(<donnee_allouee>)      : libère la mémoire allouée dynamiquement
             [pour chaque malloc = 1 free /!\!/!\!/!\]
             
    calloc(<donnee>, <taille_en_octets>) : alloue et initialise tout à 0
    realloc(<donne>, <nouvelle_taille>)  : réalloue un espace memoire
*/

int main(void)
{
    int nombreJoueurs = 2;
    int *liste_joueurs = NULL;
    int i;

    liste_joueurs = malloc(nombreJoueurs * sizeof(int));

    if(liste_joueurs == NULL)
        exit(1);
    
    for(i = 0 ; i < nombreJoueurs ; i++)
    {
        printf("Joueu %d -> numero %d\n", i + 1, i * 3);
        liste_joueurs[i] = i * 3;
    }
    for(i = 0 ; i < nombreJoueurs ; i++)
    {
        printf("[%d] ", liste_joueurs[i]);
    }

    printf("Adresse de la liste : %p\n", liste_joueurs);

    printf("\n--------------------------------\n");

    nombreJoueurs = 5;

    liste_joueurs = realloc(liste_joueurs, nombreJoueurs * sizeof(int));

    if(liste_joueurs == NULL)
        exit(1);

    for(i = 0 ; i < nombreJoueurs ; i++)
    {
        printf("Joueu %d -> numero %d\n", i + 1, i * 3);
        liste_joueurs[i] = i * 3;
    }
    for(i = 0 ; i < nombreJoueurs ; i++)
    {
        printf("[%d] ", liste_joueurs[i]);
    }
        printf("Adresse de la liste : %p\n", liste_joueurs);


    free(liste_joueurs);

    return 0;
}