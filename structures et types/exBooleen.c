#include <stdio.h>

typedef enum MarqueVoiture 
{
    PEUGEOT = 10,     //0
    RENAULT = 20,     //1
    TOYOTA  = 30,      //2
    MAZDA   = 40     //3
} Marque;

int main(void)
{
    Marque voiture1 = TOYOTA; //ou mettre identificateur par valleur ex voiture1 = 30

    return 0; 
}