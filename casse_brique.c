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

void plateforme(char grille[15][20])
{
    char choix;
    int idx;
    scanf("%c", &choix);
    for(int i = 0; i<=14; i++)
    {
        for(int j = 0; j<= 19; j++)
        {
            if(choix == 'd')
            {
                
            }
            else 
            {

            }
        }
    }
    
}