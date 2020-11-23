#include <stdio.h>
#include "dlist.h"

int main(void)
{
    DList mylist = new_dlist();
    print_dlist(mylist);
    printf("Taille de la Dliste : %d\n", dlist_length(mylist));
    printf("\n-----------------------------\n");
    mylist = push_front_dlist(mylist, 14);
    print_dlist(mylist);
    printf("Taille de la Dliste : %d\n", dlist_length(mylist));
    printf("\n-----------------------------\n");
    mylist = push_front_dlist(mylist, 6);
    mylist = push_back_dlist(mylist, 23);
    mylist = push_front_dlist(mylist, 5);
    mylist = push_back_dlist(mylist, 67);
    print_dlist(mylist);
    printf("Taille de la Dliste : %d\n", dlist_length(mylist));
    printf("\n-----------------------------\n");
    mylist = clear_dlist(mylist);
    print_dlist(mylist);
    printf("Taille de la Dliste : %d\n", dlist_length(mylist));

    return 0;
}