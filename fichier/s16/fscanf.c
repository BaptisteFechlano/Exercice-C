#include <stdio.h>
#include <stdlib.h>

/*
    mode texte uniquement !

    fopen(<fichier, <mode_ouverture>) : r  (lecture seule, doit exister)
                                        w  (écriture seule) 
                                        a  (ajout de fichier)
                                        r+ (lecture/écriture, doit exister)
                                        w+ (lecture/écriture, supprime contenu)
                                        a+ (ajout lecture/écriture, fin de fichier)
    fclose(<fichier>) : fermer un fichier ouvert
    feof(<fichier>)   : tester la fin d'un fichier

    [LECTURE]
    fgetc(<fichier>) : lire un caractère
    fgets(<chaine>, <taille_chaine>, <fichier>) : lire une ligne //fonction plus sécurisé


    [ECRITURE]

*/

int main(void)
{
    FILE *fic = fopen("sauvegarde.txt", "r");
    signed char texte[256];
    int jours = 0;
    int nombre_abonnes = 0;
    
    if(fic == NULL)
        exit(1);

    fscanf(fic, "%s %d %d", texte, &jours, &nombre_abonnes);

    printf("Nom : %s\n", texte);
    printf("Jours : %d\n", jours);
 
    fclose(fic);

    return 0;
}