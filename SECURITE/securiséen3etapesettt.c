#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

    Liste NOIRE ! : gets(), atoi(), atol(,) atod()
    Liste GRISE   : scanf() ne compte pas l'espace, fscanf() -> savoir comment cette fonction fonctionne
    Liste BLANCHE : fgets(), sécurisé par défault retour null si pas d'information

                    strtol(), strtod()

            long int strtol(const char *str, char **endpr, int base)
                                    pointeur infini *  ** 


    automatiquement : stdin -> capture tout ce qui passe

    int scanf(const char *format, ..autre variables..);

    int someFonction(params...)
    {
        return 0
        //si problème digitalRead
        return -1;

        //...si problème G
        return -11;
    }

    ret = someFunction(...)

    -------------------------------------------

    chaine en C : blablahbla\0 (scanf avec %s)
    
     

*/
/*

porte|creerdictionnaire
chat|dsjdklae
voiture|fzklfjezfmlkj travailler avec des fichiers binaire
pareil à "%s|%s"....

manipules des octets 

sizeof() 

%s, %c, %d,

%5[]


*/

#define BUFFER_SIZE 6
//juste un exemple n'est pas du tout sécurisé

int main(void)
{
    char buffer[BUFFER_SIZE + 1];
    long int number = 0;

    fgets(buffer, 6, stdin);

    number = strtol(buffer, NULL, 10);

    printf("Nombre : %1d\n", number);

    return 0;
}

//UTILISER MACRO EN PLUS ""%5s""