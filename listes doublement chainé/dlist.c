#include <stdio.h>
#include <stdlib.h>
#include "dlist.h"

/*----------------------------------------------*/

DList new_dlist(void)
{
    return NULL;
}

/*----------------------------------------------*/

Bool is_empty_dlist(DList li)
{
    if(li == NULL)
        return true;
    return false;
}

/*----------------------------------------------*/

int dlist_length(DList li)
{
    if(is_empty_dlist(li))
        return 0;
    return li->length;
}
/*----------------------------------------------*/
int dlist_first(DList li)
{
    if(is_empty_dlist(li))
        exit(1);

    return li->begin->value;
}
int dlist_last(DList li)
{
    if(is_empty_dlist(li))
        exit(1);

    return li->begin->value;
}
/*----------------------------------------------*/
void print_dlist(DList li)
{
    if(is_empty_dlist(li))
    {
        printf("Rien a afficher, la Dliste est vide.\n");
        return;
    }
    DListNode *temp = li->begin;

    while(temp != NULL)
    {
        printf("[%d] ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}
/*----------------------------------------------*/
DList push_back_dlist(DList li, int x)
{
    DListNode *element;

    element = malloc(sizeof(*element));

    if(element == NULL)
    {
        fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
        exit(EXIT_FAILURE);
    }
    element->value = x;
    element->next = NULL;
    element->next = NULL;

    if(is_empty_dlist(li))
    {
        li = malloc(sizeof(*li));

        if(li == NULL)
        {
            fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
            exit(EXIT_FAILURE);
        }
            li->length = 0;
            li->begin = element;
            li->end = element;
        }
        else
        {
            li->end->next = element;
            element->back = li->end;
            li->end = element;
        }

        li->length++;

        return li;
}
/*----------------------------------------------*/
DList push_front_dlist(DList li, int x)
{
    DListNode *element;

    element = malloc(sizeof(*element));

    if(element == NULL)
    {
        fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
        exit(EXIT_FAILURE);
    }
    element->value = x;
    element->next = NULL;
    element->next = NULL;

    if(is_empty_dlist(li))
    {
        li = malloc(sizeof(*li));
        if(li == NULL)
        {
            fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
            exit(EXIT_FAILURE);
        }
            li->length = 0;
            li->begin = element;
            li->end = element;
    }
        else
        {
            li->begin->back = element;
            element->next = li->begin;
            li->begin = element;
        }
        li->length++;
        return li;
}
/*----------------------------------------------*/
    DList pop_back_dlist(DList li)
{
    if(is_empty_dlist(li))
    {
        printf("Rien a supprimer, la DListe est deja vide.\n");
        return new_dlist();
    }
    if(li->begin == li->end)
    {
        free(li);
        li = NULL;

        return new_dlist();
    }
    DListNode *temp = li->end;

    li->end = li->end->back;
    li->end->next = NULL;
    temp->next = NULL;
    temp->back = NULL;

    free(temp);
    temp = NULL;

    li->length--;

    return li;
}
/*----------------------------------------------*/
    DList pop_front_dlist(DList li)
{
    if(is_empty_dlist(li))
    {
        printf("Rien a supprimer, la DListe est deja vide.\n");
        return new_dlist();
    }
    if(li->begin == li->end)
    {
        free(li);
        li = NULL;
        return new_dlist();
    }
    DListNode *temp = li->begin;

    li->begin = li->begin->next;
    li->begin->back = NULL;
    temp->next = NULL;
    temp->back = NULL;

    free(temp);
    temp = NULL;

    li->length--;

    return li;
}
/*----------------------------------------------*/
DList clear_dlist(DList li)
{
    while(!is_empty_dlist(li))
        li = pop_back_dlist(li);

    return new_dlist();
}
/*----------------------------------------------*/