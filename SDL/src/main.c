#include <SDL.h>
#include <stdio.h>

int main(int argc, char **argv) //probleme a la compil si signature pas détaillé
{
    SDL_version nb;
    SDL_VERSION(&nb);

    printf("Bienvenue sur la SDL %d.%d.%d !\n", nb.major, nb.minor, nb.patch);

    return 0;
}

/*CMD !!!!!

gcc src/*.c -o bin/prog -I include -L lib -lmingw32 -lSDL2main -lSDL2 */