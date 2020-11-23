#include <stdio.h>

int main(void)
{
    // declaration et affectation d'une variable de type entier (int)
int nombre_entier = 45;
int autre_nombre = 16;

/*
    %d : nombre entier (int)
    %f : nombre flottant (float)
    %c : caractère (char)
    %s : chaine de caractère (texte)
*/
    printf("Le nombre est %d ou %d.\n", nombre_entier,autre_nombre);

    return 0;
}
