#include <stdio.h>
void bonjour(void)
{
    printf("Bonjour :p \n");

    return 1;
}

int main(void) 
{
    int retour_fonction;

    retour_fonction = bonjour();

    printf("Retour : %d\n", retour_fonction);
 
    return 0;
} 
