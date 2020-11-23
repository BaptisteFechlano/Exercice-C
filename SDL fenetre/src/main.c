#include <SDL.h>
#include <stdio.h>
#include <stdlib.h>

/* Rappel de compilation 
>Windows        : gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2
>GNU/Linux, MacOS : gcc main.c $(sdl2-config --cflags --libs) -o prog
*/

int main(int argc, char **argv)
{
    SDL_Window *window = NULL;

    if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        SDL_Log("ERREUR : Initialisation SDL > %s\n",SDL_GetError());
        exit(EXIT_FAILURE);
    } //BASE !!!!!!

    //Execution du programme....
    window = SDL_CreateWindow("Première fenêtre SDL 2", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 800,600,0);

    if(window == NULL)
    {
        SDL_Log("ERREUR : Création fenêtre échouée > %s\n",SDL_GetError());
        exit(EXIT_FAILURE);
    }

    SDL_Delay(5000);

    SDL_Quit(); //<-BASE SUITE !!!! libère les ressources, le faire à chaque Initialisation

    return EXIT_SUCCESS; //return 0;
}