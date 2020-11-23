#include <stdio.h>

int init_ball(int posX);

int main(void) //bien enregistrer utf8 (settings) et toujours la fonction main de base (void= pas de paramètre précis, valeur de retour int =0)
{
 /*
    Exemple de fonction : utiliser une fonction pour une utilisation
        
        -printf() 
        -scanf()
        
 */
    int balleX;
    balleX = init_ball(balleX);
    printf("Avant la partie : %d\n", balleX);

    //une partie de jeu se fait...

    balleX = init_ball(balleX);
    printf("Apres la partie : %d\n", balleX);
    return 0;
} // aucune valeur de posX dans le main 

int init_ball(int posX)
{
    posX = 150;
    return posX;
}  // = variable locale, fonction détruite après utilisation puis réaféctation à la première valeure