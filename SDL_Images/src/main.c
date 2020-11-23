/*
    Windows
        > gcc src/*.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2 -lSDL2_image
*/
#include <SDL.h>
#include <SDL_image.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>



void clean_resources(SDL_Window *w, SDL_Renderer *r, SDL_Texture *t)
{
    if(t != NULL)
        SDL_DestroyTexture(t); //LIBRER LES RSS à L'ENVERS

    if(r != NULL)
        SDL_DestroyRenderer(r);

    if(w != NULL)
        SDL_DestroyWindow(w);

    SDL_Quit();
}

/*-----------------------------------------------------------------*/

int main(int argc, char **argv)
{
    SDL_Window *window = NULL;
    SDL_Renderer *renderer = NULL;
    SDL_Surface *picture = NULL;
    SDL_Texture *texture = NULL;
    SDL_Rect dest_rect = {0, 0, 640, 480};

    if(SDL_Init(SDL_INIT_VIDEO) != 0)
    {
        SDL_Log("ERREUR1 > %s\n", SDL_GetError());
        clean_resources(NULL, NULL, NULL); //NULL fenetre, rendu, texture
        exit(EXIT_FAILURE);
    }

    window = SDL_CreateWindow("Affichage avec SDL2_image", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, 0);
    if(window == NULL)
    {
        SDL_Log("ERREUR2 > %s\n", SDL_GetError());
        clean_resources(NULL, NULL, NULL);
        exit(EXIT_FAILURE);
    }

    renderer = SDL_CreateRenderer(window, -1, SDL_RENDERER_SOFTWARE);
    if(renderer == NULL)
    {
        SDL_Log("ERREUR3 > %s\n", SDL_GetError());
        clean_resources(window, NULL, NULL);
        exit(EXIT_FAILURE);
    }

    picture = IMG_Load("src/exop.jpg");
    if(picture == NULL)
    {
        SDL_Log("ERREUR4 > %s\n", SDL_GetError());
        clean_resources(window, renderer, NULL);
        exit(EXIT_FAILURE);
    }

    texture = SDL_CreateTextureFromSurface(renderer, picture);
    SDL_FreeSurface(picture);
    if(texture == NULL)
    {
        SDL_Log("ERREUR5 > %s\n", SDL_GetError());
        clean_resources(window, renderer, NULL);
        exit(EXIT_FAILURE);
    }

    if(SDL_QueryTexture(texture, NULL, NULL, &dest_rect.w, &dest_rect.h) != 0)
    {
        SDL_Log("ERREUR6 > %s\n", SDL_GetError());
        clean_resources(window, renderer, texture);
        exit(EXIT_FAILURE);
    }

    if(SDL_RenderCopy(renderer, texture, NULL, &dest_rect) != 0)
    {
        SDL_Log("ERREUR7 > %s\n", SDL_GetError());
        clean_resources(window, renderer, texture);
        exit(EXIT_FAILURE);
    }

    SDL_RenderPresent(renderer);
    SDL_Delay(6000);

    clean_resources(window, renderer, texture);
    return EXIT_SUCCESS;
}
