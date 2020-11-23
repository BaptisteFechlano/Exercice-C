#include <stdio.h>
#include <stdlib.h>

/*
    sizeof(<donnee>)            : retourne la taille en octets d'une donnée
    malloc(<taille_en_octets>)  : allouer dynamiquement en zone mémoire
    free(<donnee_allouee>)      : libère la mémoire allouée dynamiquement
             [pour chaque malloc = 1 free /!\!/!\!/!\]
*/

int main(void)
{
    int nombreJoueurs = 0;
    int *liste_joueurs = NULL;
    int i;

    printf("Combien de joueurs ? ");
    scanf("%d", &nombreJoueurs);

    liste_joueurs = malloc(sizeof(int) * nombreJoueurs);

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

    free(liste_joueurs);

    return 0;
}