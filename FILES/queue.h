#ifndef __QUEUE__H__
#define __QUEUE__H__

/* Définition du type booléen */
typedef enum
{
    false,
    true
}Bool;

/* Définition d'une file */
typedef struct QueueElement
{
    int value;
    struct QueueElement *next;
}QueueElement, *Queue;

/* Paramètres de la file */
static QueueElement *first = NULL;
static QueueElement *last = NULL;
static int nb_elements = 0;

/* Prototypes */
Bool is_empty_queue(void);
int queue_lenght(void);
int queue_first(void);
int queue_last(void);
void print_queue(void);
void push_queue(int x);
void pop_queue(void);
void clear_queue(void);

#endif