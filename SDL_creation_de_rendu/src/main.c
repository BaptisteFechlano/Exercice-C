/*
    GNU/Linux et MacOS
        > gcc main.c $(sdl2-config --cflags --libs) -o prog
        > gcc *.c $(sdl2-config --cflags --libs) -o prog
    Windows
        > gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2
        > gcc src/main.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2 -mwindows
*/
#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>

void SDL_ExitWithError(const char *message);

int main(int argc, char *argv[])
{
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;


    //Lancement SDL
    if(SDL_Init(SDL_INIT_VIDEO) != 0)
        SDL_ExitWithError("Initialisation SDL");

    //création fenetre + rendu
    if(SDL_CreateWindowAndRenderer(800, 600, 0, &window, &renderer)!= 0)
        SDL_ExitWithError("Impossible de créer la fenetre et le rendu");
/*------------------------------------------------------------*/
    if(SDL_SetRenderDrawColor(renderer, 41,131,84, SDL_ALPHA_OPAQUE) != 0)
        SDL_ExitWithError("Impossible de changer la couleur");

    if(SDL_RenderDrawPoint(renderer,100,450) != 0)
        SDL_ExitWithError("Impossible de dessiner un point");

    if(SDL_RenderDrawLine(renderer,50,50,500,500) != 0)
        SDL_ExitWithError("Impossible de dessiner une ligne");

    if(SDL_SetRenderDrawColor(renderer, 22,96,150, SDL_ALPHA_OPAQUE) != 0)
        SDL_ExitWithError("Impossible de changer la couleur");


    SDL_Rect rectangle;
    rectangle.x = 150;
    rectangle.y = 300;
    rectangle.w = 200;
    rectangle.h = 150;

    if(SDL_RenderFillRect(renderer, &rectangle) != 0)
        SDL_ExitWithError("Impossible de dessiner un rectangle");


    SDL_RenderPresent(renderer);
    SDL_Delay(6000);
/*------------------------------------------------------------*/
    SDL_DestroyRenderer(renderer);
    SDL_DestroyWindow(window);
    SDL_Quit();

    return EXIT_SUCCESS;
}

void SDL_ExitWithError(const char *message)
{
    SDL_Log("ERREUR : %s > %s\n", message, SDL_GetError());
    SDL_Quit();
    exit(EXIT_FAILURE);
}