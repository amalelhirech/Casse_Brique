#include <stdio.h>
#include "jeu.h"

void creerGrille (char grille[50][30])
{
    for(int i=0; i<= 29; i++)
    {
        for (int j = 0; j<=49; j++)
        {
            grille[i][j] = '#';
        }
    }

}