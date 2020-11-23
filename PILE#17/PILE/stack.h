#ifndef __STACK__H__
#define __STACK__H__
/*-------------------------------------------------------*/
    /* Type Booléen */
    typedef enum
    {
        false, //0
        true   //1
    }Bool;
/*-------------------------------------------------------*/
    /* Definition d'un Joueur */
    typedef struct Player
    {
        char name[25];
        int level;
    }Player;

/*-------------------------------------------------------*/
    /* Définition d'une pile */
    typedef struct StackElement
    {
        player pp;
        struct StackElement *next;
    }StackElement, *Stack;

/*-------------------------------------------------------*/
    /* Prototypes des fonctions */
    Stack new_stack(void);
    Bool is_empty_stack(Stack st);
    void print_stack(Stack st);
    Stack push_stack(Stack st, Player p);
    Stack pop_stack(Stack st);
    Player top_stack(Stack st);
    int stack_lenght(Stack st);
    Stack clear_stack(Stack st);
/*-------------------------------------------------------*/
#endif