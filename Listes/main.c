#include <stdio.h>
#include "list.h"

int main(void)
{
    List mylist = new_list();

    print_list(mylist);

    mylist = push_front_list(mylist, 36);
    print_list(mylist);

    mylist = push_front_list(mylist, 87);
    mylist = push_front_list(mylist, 23);
    print_list(mylist);
    printf("Nombre d'elements : %d\n", list_lenght(mylist));

    mylist = clear_list(mylist);
    print_list(mylist);


    return 0;
}