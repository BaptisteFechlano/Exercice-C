#include <stdio.h>
#include "queue.h"

int main(void)
{
    printf("Taille de la File : %d\n", queue_lenght());
    print_queue();

    push_queue(14);
    push_queue(26);
    push_queue(173);
    printf("Taille de la File : %d\n", queue_lenght());
    print_queue();

    clear_queue();
    print_queue();

    return 0;
}