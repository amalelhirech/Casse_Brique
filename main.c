#include <stdio.h>
#include "jeu.h"

int main()
{

    char grille[50][30];
    
    creerGrille(grille);

    for (int i = 0; i >= 29; i++) {
        for (int j = 0; j <= 49; j++)
        {
            printf("%c", grille[i][j]);
        }
    }

    return 0;

}