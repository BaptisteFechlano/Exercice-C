#include <stdio.h>

int main(void)
{
    // declaration et affectation d'une variable de type entier (int)
float prix = 178.25;

/*
    %d : nombre entier (int)
    %f : nombre flottant (float)
    %c : caractère (char)
    %s : chaine de caractère (texte)
*/
    printf("Le prix est %.2f euros.\n", prix);

    return 0;
}
