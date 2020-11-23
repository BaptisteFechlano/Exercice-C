#include <stdio.h>

int main(void)
{
    register int nombre = 5; //variable prioritaire
    volatile int autreNombre = 10; //reste dans la memoire ram 

    return 0;
}
