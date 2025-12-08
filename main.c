#include <stdio.h>
#include "jeu.h"

int main()
{

    char grille[15][20];
    
    creerGrille(grille);

    for (int i = 0; i <= 14; i++) 
    {
        printf("\n");
        for (int j = 0; j <= 19; j++)
        {
            printf("%c", grille[i][j]);
        }
    }

    return 0;

}