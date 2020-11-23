#include <stdio.h>
#include <string.h>

typedef struct Player 
{
    signed char username[256];
    int hp;
    int mp; 
} Joueur;

//remplacer typedef ajoute un mot clé à la description pour éviter les mots clés à rallonge


int main(void)
{
    Joueur p1 = {"Batou", 100, 100};
    
    printf("Nom du joueur : %s\n", p1.username);
    printf("PV : %d | PM : %d\n", p1.hp, p1.mp);

    strcpy(p1.username, "Btao"); 
    p1.hp -= 50;

    printf("Nom du joueur : %s\n", p1.username);
    printf("PV : %d | PM : %d\n", p1.hp, p1.mp);

    return 0;
}