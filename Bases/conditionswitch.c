#include <stdio.h>

int main(void)
{
    int age = 375;

    switch(age)
    {
        case 0:
            printf("Tu as 0 an.\n");
        break;

        case 15:
            printf("Age vaut 15\n");
            break;

        default:
            printf("Tu n'as ni 0 an, ni 15 ans.\n");
            break;
    }

    return 0;
}