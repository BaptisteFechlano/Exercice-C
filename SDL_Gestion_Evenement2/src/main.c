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

#define WINDOW_WIDTH 600
#define WINDOW_HEIGHT 480
#define FPS_LIMIT 16

void SDL_ExitWithError(const char *message);
void SDL_LimitFPS(unsigned int limit);

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


/*------------------------------------------------------------*/
 SDL_bool program_launched = SDL_TRUE; //aller sur le wiki libsdl.org pour commande diff

    unsigned int frame_limit = 0;

    /*unsigned int ticks = 0;
    SDL_Delay(6000);
    ticks = SDL_GetTicks();//FPS !!

    printf("%dms ecoulee.\n", ticks);

    Calcul de la FPS

    1000 / 30 (30frames par sec) = 33
    1000 / 60 = 16.6666 = 16 frame par sec <-----------

    */

   frame_limit = SDL_GetTicks() + FPS_LIMIT; //debut de lancement de jeux
   //delais pour limiter a 60fps
   SDL_LimitFPS(frame_limit);

   frame_limit = SDL_GetTicks() + FPS_LIMIT; // mettre a la fin

    while(program_launched)
    {
        SDL_Event event;
                //event.motion.quelquechose

        while(SDL_PollEvent(&event))
        {
            switch(event.type)
            {
               /*  case SDL_WINDOWEVENT:
                    //event.window.event
                    if(event.window.event == SDL_WINDOWEVENT_LEAVE)
                        printf("La souris est sortie de la fenetre.\n");
                    if(event.window.event == SDL_WINDOWEVENT_ENTER)
                        printf("La sourie est sur la fenetre.\n");
                    break;


               case SDL_MOUSEBUTTONDOWN: //SDL_SYSWMEVENT system event!!
                    printf("Clic en %dx / %dy\n", event.button.x, event.button.y);
                    break; */

                case SDL_QUIT:
                    program_launched = SDL_FALSE;
                    break;

                default:
                    break; //boucle infini comme un vrai programme
            }
        }
    }

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

void SDL_LimitFPS(unsigned int limit)
{
    unsigned int ticks = SDL_GetTicks();

    if(limit < ticks)
        return;
    else if(limit > ticks + FPS_LIMIT) //lague ou rapidité donc décallage
        SDL_Delay(FPS_LIMIT);
    else
        SDL_Delay(limit - ticks);
}