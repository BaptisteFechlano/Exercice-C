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
    fgetc(<fichier>)                             : lire un caractère
    fgets(<chaine>, <taille_chaine>, <fichier>)  : lire une ligne //fonction plus sécurisé
    fscanf(<fichier>, <format>, ...)             : lire du texte formaté (%s, %d etc)

    [ECRITURE]

*/

int main(void)
{
    FILE *fic = fopen("sauvegarde.txt", "r");
    signed char texte[256];
    
    if(fic == NULL)
        exit(1);

    while (fgets(texte, 255, fic) != NULL)
        printf("%s\n", texte);
    
    /*
    fgets(texte, 255, fic);
    printf("%s\n, texte");
    
    fgets(texte, 255, fic);
    printf("%s\n, texte");
    */

    fclose(fic);

    return 0;
}