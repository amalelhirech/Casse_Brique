#include <stdio.h>
#include "jeu.h"

void creerGrille (char grille[15][20])
{
    for(int i=0; i<= 14; i++)
    {
        for (int j = 0; j<=19; j++)
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

    grille[14][5] = '=';
    grille[14][6] = '=';
    grille[14][7] = '=';
    grille[14][8] = '=';



}

/*void plateforme(char grille[50][30])
{
    char plateforme[4][1] = {"=","=","=","="};
    char choix;
    int idx;
    scanf("%d", &choix)
    if (choix == 'd')
    {
        for(int j = 0; j<=49; j++)
        {
            idx = idx + 1
        }
        else 
        {
            idx = idx - 1
        }
    }
    
}*/