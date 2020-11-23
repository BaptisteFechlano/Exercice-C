#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*

    Liste NOIRE ! : gets(), atoi(), atol(,) atod() ne pas avec fflush nettoy tampon mémoire, (stdin)
    Liste GRISE   : scanf() ne compte pas l'espace, fscanf() -> savoir comment cette fonction fonctionne
    Liste BLANCHE : fgets() ajoute un saut à la ligne automatiquement, sécurisé par défault retour null si pas d'information

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

void flush_input_buffer(void)
{
    int c = 0;

    while (c != '\n' && c != EOF)
        c = getchar();
}

char *input_read(char *str, int size)
{
    char *data;

    data = fgets(str, size, stdin);

    if (data)
    {
        size_t len = strlen(str) - 1;

        if (str[len] == '\n')
            str[len] = '\0';
        else
        {
            fscanf(stdin, "%*[^\n]");
            fgetc(stdin);
        }
    }

    return data;
}

int main(void)
{
    char buffer[BUFFER_SIZE + 1];

    printf("Mot en 5 lettres :");
    fgets(buffer, BUFFER_SIZE + 1, stdin);
    printf("%s\n", buffer);

    printf("-------------\n");

    printf("Mot en 5 lettres :");
    fgets(buffer, BUFFER_SIZE + 1, stdin);
    printf("%s\n", buffer);

    return 0;
}
