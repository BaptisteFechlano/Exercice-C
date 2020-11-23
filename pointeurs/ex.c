#include <stdio.h>



void   change_nombre(int *nb)

{
    *nb = 15;
    
}

int main(void)
{
    int nombre = 0;

    printf("Nombre = %d\n", nombre);
    change_nombre(&nombre);
    printf("Nombre = %d\n", nombre);

    return 0;
}