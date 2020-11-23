#include <stdio.h>
#include <stdlib.h>
#include "queue.h"

Bool is_empty_queue(void)
{
    if(first == NULL && last == NULL)
        return true;

    return false;
}

/*-----------------------------------------------*/
int queue_lenght(void)
{
    return nb_elements;
}
/*-----------------------------------------------*/
int queue_first(void)
{
    if(is_empty_queue())
        exit(1);
    return first->value;
}
/*-----------------------------------------------*/
int queue_last(void)
{
    if(is_empty_queue())
        exit(1);
    return last->value;
}
/*-----------------------------------------------*/
void print_queue(void)
{
    if(is_empty_queue())
    {
        printf("Rien a afficher, la File est vide.\n");
        return;
    }
    QueueElement *temp = first;

    while(temp != NULL)
    {
        printf("[%d] ", temp->value);
        temp = temp->next;
    }
    printf("\n");
}
/*-----------------------------------------------*/
void push_queue(int x)
{
    QueueElement *element;

    element = malloc(sizeof(*element));

    if(element == NULL)
    {
        fprintf(stderr, "Erreur : probleme allocation dynamique.\n");
        exit(EXIT_FAILURE);
    }

    element->value = x;
    element->next = NULL;

    if(is_empty_queue())
    {
        first = element;
        last = element;
    }
    else
    {
        last->next = element;
        last = element;
    }
    nb_elements++;

}
/*-----------------------------------------------*/
void pop_queue(void)
{
    if(is_empty_queue())
    {
        printf("Rien a retirer, la File est vide.\n");
        return;
    }
    QueueElement *temp = first;

    if(first == last)
    {
        first = NULL;
        last = NULL;
    }
    else
        first = first->next;

    free(temp);
    nb_elements--;
}
/*-----------------------------------------------*/
void clear_queue(void)
{
    if(is_empty_queue())
    {
        printf("Rien a nettoyer, la File est deja vide.\n");
        return;
    }
    while(!is_empty_queue())
        pop_queue();
}