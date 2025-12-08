#ifndef JEU
#define JEU
#include <stdio.h>
#include <stdlib.h>


void creerGrille (char grille[15][20]);
void plateforme(char grille[15][20]);
void deplacerBalle(char grille[15][20],int balleColonne, int balleLigne,int directionX, int directionY,int resultat[4]);
int perdu(int balleLigne);


#endif 
