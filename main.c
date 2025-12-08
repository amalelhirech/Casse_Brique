#include <stdio.h>
#include "jeu.h"
#include <windows.h>

int main()
{
    int score = 0;
    char grille[15][20];


    creerGrille(grille);

    int balleColonne = 10;
    int balleLigne = 10;

    int directionX = 1;
    int directionY = -1;
    grille[balleLigne][balleColonne] = 'O';

    while (1)
    {
        system("cls");
        printf("Score : %d\n", score);

        for (int i = 0; i < 15; i++)
        {
            for (int j = 0; j < 20; j++)
            {
                printf("%c", grille[i][j]);
            }
            printf("\n");
        }

        char touche = lireCommandeNonBloquante();
        if (touche == 's')
        {
            printf("Vous avez quitte le jeu.\n");
            break;
        }

        plateforme(grille);

        int resultat[5];
        deplacerBalle(grille, balleColonne, balleLigne, directionX, directionY, resultat);

        balleColonne = resultat[0];
        balleLigne = resultat[1];
        directionX = resultat[2];
        directionY = resultat[3];

        score = score + resultat[4];

        if (perdu(balleLigne))
        {
            printf("PERDU ! La balle est tombee.\n");
            break;
        }
        Sleep(400);
    }

    printf("Score final : %d\n", score);

    char nom[50];
    printf("Entrez votre nom  : ");
    scanf("%s", nom);

    FILE *f = fopen("scores.txt", "a");
    if (f != NULL)
    {
        fprintf(f, "%s %d\n", nom, score);
        fclose(f);
        printf("Score enregistre dans scores.txt\n");
    }
    else
    {
        printf("Erreur : impossible d'ouvrir scores.txt\n");
    }

    return 0;
}