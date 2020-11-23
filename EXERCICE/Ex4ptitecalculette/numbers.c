#include "numbers.h"
#include <stdio.h>
#include <stdlib.h>

void app_calc(void)
{
    int choice = 0;

    do
    {
        show_menu();
        printf("> ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
            do_operation(choice);//Addition
            break;

            case 2:
            do_operation(choice);//Soustraction
            break;

            case 3:
            do_operation(choice);//Multiplication
            break;

            case 4:
            do_operation(choice);//Division
            break;

            case 5:
            break;

            default:
                printf("Plop Erreur saisie ! \n");
                break;
        }

    }
    while(choice != 5);
}

void show_menu(void)
{
    printf("-----------------------------\n");
    printf("1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n5. Quitter le programme\n");
    printf("-----------------------------\n");
}

void do_operation(int choice)
{
    float nb1 = 0, nb2 = 0;
    float result = 0;

    do
    {
        printf("Entrez un premier nombre : ");
        scanf("%f", &nb1);

        printf("Entrez un deuxieme nombre : ");
        scanf("%f", &nb2);

        if(nb1 < -1000 || nb1 > 1000 || nb2 < -1000 || nb2 > 1000)
            printf("Saisie incorrecte (choisis un nombre entre -1000 et 1000\n");
        else
        {
            if(choice == 1) result = addition(nb1, nb2);
            else if(choice == 2)result = soustraction(nb1, nb2);
            else if(choice == 3)result = multiplication(nb1, nb2);
            else if(choice == 4)result = division(nb1, nb2);

            printf("Resultat du calcul = %f\n", result);
            printf("-----------------------------\n");
        }
    }
    while(nb1 < -1000 || nb1 > 1000 || nb2 < -1000 || nb2 > 1000);
}

float addition(float a, float b)
{
    return a + b;
}
float soustraction(float a, float b)
{
    return a - b;
}
float multiplication(float a, float b)
{
    return a * b;
}
float division(float a, float b)
{
    if(b == 0)
    {
        printf("Division par 0 impossible\n");
        exit(-1);
    }

    return a / b;
}