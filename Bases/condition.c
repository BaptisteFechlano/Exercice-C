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
    int nombre = 32 ;
    
    if (nombre < 20)
    //if(nombre == 0)
  {
  //      printf("Nombre vaut bien 0.\n");
        printf("Nombre est inférieur a 20.\n");
    }
    else 
    {
            printf ("Nombre est plus grand que 20.\n");
    }

    return 0;
}