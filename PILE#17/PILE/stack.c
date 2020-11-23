#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

Stack new_stack(void)
{

    return NULL;
}

/*-------------------------------------------------------*/

Bool is_empty_stack(Stack st)
{
    if (st == NULL)
        return true;
    return false;
}

/*-------------------------------------------------------*/

Stack push_stack(Stack st, Player p)
{
    StackElement *element;

    element = malloc(sizeof(*element));

    if(element == NULL)
    {
        fprintf(stderr, "Probleme allocation dynamique.\n"); //reservé au terminal pour les erreurs
        exit(EXIT_FAILURE);
    }
    strcpy(element->pp.name, p.name);
    element->pp.level = p.level;
    element->next = st;

    return element;
}
/*-------------------------------------------------------*/
Stack pop_stack(Stack st)
{
    StackElement *element;

    if(is_empty_stack(st))
        return new_stack();

    element = st->next;
    free(st);

    return element;
}
/*-------------------------------------------------------*/
void print_stack(Stack st)
{
    if(is_empty_stack(st))
    {
        printf("Rien a afficher, la Pile est vide.\n");
        return;
    }
    while(!is_empty_stack(st))
    {
        printf("[%s - niveau %d]\n", st->pp.name, st->pp.level);
        st = st->next;
    }
}
/*-------------------------------------------------------*/
Player top_stack(Stack st)
{
    if(is_empty_stack(st))
    {
        printf("Aucun sommet, la Pile est vide.\n");
        return NULL;
    }

    return st->pp;
}

/*-------------------------------------------------------*/
int stack_lenght(Stack st)
{
    int lenght = 0;

    while(!is_empty_stack(st))
    {
        lenght++;
        st = st->next;
    }

    return lenght;
}
/*-------------------------------------------------------*/
Stack clear_stack(Stack st)
{
    while(!is_empty_stack(st))
        st= pop_stack(st);

    return new_stack();
}