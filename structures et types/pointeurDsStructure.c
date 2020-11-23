#include <stdio.h>
#include <string.h>

/*
    (*monPointeur).un_champ = X;
    monPointeur->un_champ = X; façon plus simple d'appeler un pointeur! (quand la fonction est defini comme pointeur)
*/

typedef struct Player 
{
    signed char username[256];
    int hp;
    int mp; 
} Joueur;

//remplacer typedef ajoute un mot clé à la description pour éviter les mots clés à rallonge
/*----------------------------------------------*/
void create_player(Joueur *p)
{
    strcpy(p->username , "Btaold");
    p->hp = 100;
    p->mp = 88;
}
/*----------------------------------------------*/
int main(void)
{
    Joueur p1 = {"", 0, 0};
    
    create_player(&p1);

    printf("Nom du joueur : %s\n", p1.username);
    printf("PV : %d | PM : %d\n", p1.hp, p1.mp);

    return 0;
}