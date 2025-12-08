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
    scanf(" %c", &choix);

    int ligne = 14;
    int debut = -1;

    for (int j = 0; j < 20; j++)
    {
        if (grille[ligne][j] == '=')
        {
            debut = j;
            break;
        }
    }

    grille[ligne][debut] = ' ';
    grille[ligne][debut + 1] = ' ';
    grille[ligne][debut + 2] = ' ';
    grille[ligne][debut + 3] = ' ';

    if (choix == 'g' && debut > 0)
        debut--;

    if (choix == 'd' && debut + 3 < 19)
        debut++;

    grille[ligne][debut] = '=';
    grille[ligne][debut + 1] = '=';
    grille[ligne][debut + 2] = '=';
    grille[ligne][debut + 3] = '=';
}

void deplacerBalle(char grille[15][20],int balleColonne, int balleLigne,int directionX, int directionY,int resultat[4])
{
    grille[balleLigne][balleColonne] = ' ';

    int x = balleColonne + directionX;
    int y = balleLigne + directionY;

    if (x < 0 || x >= 20)
        directionX = -directionX;

    if (y < 0)
        directionY = -directionY;

    x = balleColonne + directionX;
    y = balleLigne + directionY;

    if (y == 14 && grille[14][x] == '=')
        directionY = -directionY;

    grille[y][x] = 'O';

    resultat[0] = x;
    resultat[1] = y;
    resultat[2] = directionX;
    resultat[3] = directionY;
}

int perdu(int balleLigne)
{
    if (balleLigne > 14)
        return 1;  

    return 0;       
}