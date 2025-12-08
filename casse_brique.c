#include <stdio.h>
#include "jeu.h"

void creerGrille (char grille[50][30])
{
    for(int i=0; i<= 49; i++)
    {
        for (int j = 0; j<=29; j++)
        {
            if(i == 0)
            {
                grille[0][j] = '#';    
            }
            else 
            {
                grille[i][j] = ' ';
            }
            
        }
    }

}