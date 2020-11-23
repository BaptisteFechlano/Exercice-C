#include <stdio.h> // # --> directive de préprocesseurs
#include "player.h"

int main(void)
{
    int level = 15;
    bonjour();
  // printf("Bonjour :) !\n");
   printf("Niveau actuel : %d\n", level);

    level = reset_niveau();

    printf("Niveau apres reset : %d\n", level);

    return 0;
}
