#include <stdio.h>
#include "player.h"

int TVA = 20; // peux être utilisé n'importe où ! variable static /static int variable ne sera pas détruite avant la fin du programme!! ou globale à éviter

void bonjour(void)
{
    printf("Bonjour (n.n)\n");
    printf("TVA = %d\n", TVA);

}

int reset_niveau(void) //récupéré dans .h
{
    int niveau;

    niveau = 0;

    return niveau;
}