#if !defined(__GAME__H__)
#define __GAME__H__

    // Macro pour la taille de l'espace du jeu
        #define MAX_ROWS 4
        #define MAX_COLS 7
    //---------------------------------------------------------------------------------------
        #define MAX_I MAX_ROWS + 3
        #define MAX_J MAX_COLS + 8

    //---------------------------------------------------------------------------------------

    // Prototypes des fonctions
        void gameManager(void);
        void initArea(char gameArea[][MAX_J], int *playerI, int *playerJ);
        void showArea(char gameArea[][MAX_J]);
        void showMenu(char *moveComand);
        void updateArea(char gameArea[][MAX_J],char *moveComand,int *playerI, int *playerJ);
        void moveUp(char gameArea[][MAX_J],int *playerI, int *playerJ);
        void moveDown(char gameArea[][MAX_J],int *playerI, int *playerJ);
        void moveLeft(char gameArea[][MAX_J],int *playerI, int *playerJ);
        void moveRight(char gameArea[][MAX_J],int *playerI, int *playerJ);
        void flushBuffer(void);
    //---------------------------------------------------------------------------------------

#endif