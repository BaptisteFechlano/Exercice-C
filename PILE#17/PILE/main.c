#include <stdio.h>
#include "stack.h"

int main(void)
{
    Player p1 = {"Joie", 15};
    Player p2 = {"Bart", 27};
    Player p3 = {"Langer", 21};
    Player p4 = {"Roche", 55};

    Stack sta = new_stack();
    print_stack(sta);
    printf("Taille de la Pile : %d\n", stack_lenght(sta));

    printf("\n------------------\n\n");

    sta = push_stack(sta, p1);
    sta = push_stack(sta, p2);
    sta = push_stack(sta, p3);
    sta = push_stack(sta, p4);
    print_stack(sta);
    printf("Taille de la Pile : %d\n", stack_lenght(sta));

    printf("\n------------------\n\n");

    sta = pop_stack(sta);
    print_stack(sta);
    printf("Taille de la Pile : %d\n", stack_lenght(sta));


    printf("\n------------------\n\n");

    sta = clear_stack(sta);
    print_stack(sta);
    printf("Taille de la Pile : %d\n", stack_lenght(sta));

    return 0;
}