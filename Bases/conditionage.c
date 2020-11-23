#include <stdio.h>

int main(void)
{

/*
    == : égal à 
    != : différent de
    < : plus grand que
    <= : plus petit ou égal à
    >= : plus grand ou égal à 
*/
    int age = 25;
    
    if (age < 1)
  {
        printf("Tu n'es pas ne.\n");
    }
    else if(age == 10)
    {
            printf ("tu as 10 ans !\n");
    }
    else
    {
        printf("Age : %d\n", age);
    }

    return 0;
}