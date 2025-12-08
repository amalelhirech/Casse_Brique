#include <stdio.h>
#include "jeu.h"

int main()
{
    char grille[15][20];

    creerGrille(grille);

    while (1)   
    {
        
        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                printf("%c", grille[i][j]);
            }
            printf("\n");
        }

        plateforme(grille);

        
    }

    return 0;
}