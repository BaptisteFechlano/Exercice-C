#include <stdio.h>

int main(void)
{

/*
     opérateur de calculs
+ (addition)
- (soustraction)
* (multiplication)
/ (division) -> 5 / 2 = 2
% (modulo) -> 5 % 2 = 1 donne le reste de la division euclidienne 
vérifie si un nombre est pair où impair

<variable>= <variable> + X ---> <variable> += 1

priorité opérateur ---> (2+20)*2
*/
    int niveau_joueur = -1;
    
    printf("Choisir niveau de depart : ");
    scanf("%d", &niveau_joueur);

    printf("Niveau de depart : %d\n", niveau_joueur);

    //le personnage a fait des quetes

    niveau_joueur = niveau_joueur + 1;
    printf("Niveau actuel : %d\n", niveau_joueur);

    return 0;
}
