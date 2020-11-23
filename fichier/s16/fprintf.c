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
    fputc(<caractère>,<fichier>)        : écrit un caractère 
    fputs(<chaine>, <fichhier>)         : écrit une ligne de texte
    fprintf(<fichier>, <format>, ...)   : écrit du texte formaté

*/

int main(void)
{
    FILE *fic = fopen("profil.save", "w");
    char pseudo[] = "Btao";
    int age = 32;
    int jours = 280;
    
    if(fic == NULL)
        exit(1);

    fprintf(fic, "%d %s %d", age, pseudo, jours);
 
    fclose(fic);

    return 0;
}