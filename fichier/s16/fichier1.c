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
    fgetc(<fichier>)                            : lire un caractère
    fgets(<chaine>, <taille_chaine>, <fichier>) : lire une ligne //fonction plus sécurisé

    [ECRITURE]

*/

int main(void)
{
    FILE *fic = fopen("sauvegarde.txt", "r");
    int lettre = 0;
    
    if(fic == NULL)
        exit(1);

    while((lettre = fgetc(fic)) != EOF)
    {
/*
        lettre = fgetc(fic);

        if(feof(fic))
            break;
*/
        printf("%c", lettre);
    }
    
   /* 
   lettre = fgetc(fic); //EOF (Enf Of File)
    printf("%c\n", lettre);

    lettre = fgetc(fic);
    printf("%c\n", lettre); 
    */

    fclose(fic);

    return 0;
}