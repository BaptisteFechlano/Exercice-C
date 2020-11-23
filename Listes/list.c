#include <stdio.h>
#include <stdlib.h>
#include "list.h"

List new_list(void)
{
    return NULL;
}

/*----------------------------------------------------------------*/

Bool is_empty_list(List li)
{
    if(li == NULL)
        return true;

    return false;
}

/*----------------------------------------------------------------*/

int list_lenght(List li) //compter nombre d'elements qu'elle contient
{
    int size = 0;

    if(!is_empty_list(li))
        while(li != NULL)
        {
            ++size;
            li = li->next;
        }
    return size;
}
/*----------------------------------------------------------------*/

void print_list(List li)
{
    if(is_empty_list(li))
    {
        printf("Rien a afficher, la liste est vide.\n");
        return;
    }

    while(li != NULL)
    {
        printf("[%d] ", li->value);
        li = li->next;
    }

    printf("\n");
}
/*----------------------------------------------------------------*/

List push_back_list(List li, int x)
{
    ListElement *element;

    element = malloc(sizeof(*element));

    if(element == NULL)
    {
        fprintf(stderr,"Erreur : probleme allocation dynamique.\n");
        exit(EXIT_FAILURE);
    }

    element->value = x;
    element->next = NULL;

    if(is_empty_list(li))
        return element;

    ListElement *temp;
    temp = li;

    while(temp->next != NULL)
        temp = temp->next;

    temp->next = element;

    return li;
}
/*----------------------------------------------------------------*/

List push_front_list(List li, int x)
{
    ListElement *element;

    element = malloc(sizeof(*element));

    if(element == NULL)
    {
        fprintf(stderr,"Erreur : probleme allocation dynamique.\n");
        exit(EXIT_FAILURE);
    }

    element->value = x;

    if(is_empty_list(li))
        element->next = NULL;
    else
        element->next= li;

    return element;
}
/*----------------------------------------------------------------*/
List pop_back_list(List li)
{
    if(is_empty_list(li))
        return new_list();

    if(li->next == NULL)
    {
        free(li);
        li = NULL; //pas obligatoire mais plus "safe"

        return new_list();
    }

    ListElement *temp = li;
    ListElement *before = li;

    while (temp->next != NULL)
    {
        before = temp;
        temp = temp->next;
    }

    before->next = NULL;
    free(temp);
    temp = NULL;

    return li;
}
/*----------------------------------------------------------------*/

List pop_front_list(List li)
{
    if(is_empty_list(li))
    return li;

    ListElement *element;
    element = malloc(sizeof(*element));
    if(element == NULL)
    {
        fprintf(stderr,"Erreur : probleme allocation dynamique.\n");
        exit(EXIT_FAILURE);
    }

    element = li->next;

    free(li);
    li = NULL;

    return element;
}
/*----------------------------------------------------------------*/

List clear_list(List li)
{
    if(is_empty_list(li))
        return new_list();

    while (li != NULL)
        li = pop_front_list(li);
}