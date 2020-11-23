#ifndef __LIST__H__
#define __LIST__H__

/* Définition du type Booléen */
typedef enum
{
    false,
    true
}Bool;

/* Définition d'une liste*/
typedef struct ListElement
{
    int value;
    struct ListElement *next;
}ListElement, *List;

/* Prototypes */
List new_list(void);
Bool is_empty_list(List li);
int list_lenght(List li);
void print_list(List li);
List push_back_list(List li, int x);
List push_front_list(List li, int x);
List pop_back_list(List li);
List pop_front_list(List li);
List clear_list(List li);

#endif