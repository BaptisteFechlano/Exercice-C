#include <stdio.h>

union Nombre
{
    int entier;
    float decimal;
}; //réunis les données sur la même zone mémoire

int main(void)
{
    union Nombre nb1;

    nb1.entier = 3;
    nb1.decimal = 3.14;

    return 0;
}