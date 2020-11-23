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

#define WINDOW_WIDTH 800
#define WINDOW_HEIGHT 600

void SDL_ExitWithError(const char *message);

int main(int argc, char *argv[])
{
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;

    //Lancement SDL
    if(SDL_Init(SDL_INIT_VIDEO) != 0)
        SDL_ExitWithError("Initialisation SDL");

    //Création fenêtre + rendu
    if(SDL_CreateWindowAndRenderer(WINDOW_WIDTH, WINDOW_HEIGHT, 0, &window, &renderer) != 0)
        SDL_ExitWithError("Impossible de créer la fenetre et le rendu");

    /*------------------------------------------------------------*/
    SDL_bool program_launched = SDL_TRUE; //aller sur le wiki libsdl.org pour commande diff

    while(program_launched)
    {
        SDL_Event event;

        while(SDL_PollEvent(&event))
        {
            switch(event.type)
            {
                case SDL_KEYDOWN:
                    switch(event.key.keysym.sym)//code touche du clavier
                    {
                        case SDLK_b:
                            printf("Vous avez appuyer sur B\n");
                            continue;
                        default:
                            continue;
                    }

                case SDL_KEYUP:
                    switch(event.key.keysym.sym)//code touche du cl
                    {
                        case SDLK_b:
                            printf("Vous avez relacher B\n");
                            continue;
                        default:
                            continue;
                    }


                case SDL_QUIT:
                    program_launched = SDL_FALSE;//variable intermédiaire pour éviter fuite des events

                    break;

                default:
                    break; //boucle infini comme un vrai programme
            }
        }
    }

  /*------------------------------------------------------------
  SDL_bool program_launched = SDL_TRUE;
    while(program_launched)
    {
        SDL_Event event;
        while(SDL_WaitEvent(&event) == 1) //bloque execution avant intervention utilisateur
        {
            switch(event.type)
            {
                case SDL_QUIT:
                    program_launched = SDL_FALSE;//variable intermé

                    break;
                default:
                    break; //boucle infini comme un vrai programme
            }
        }
    }
------------------------------------------------------------*/

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

// 15:24 error renderer