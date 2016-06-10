#ifndef utils_table_h
#define utils_table_h

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "structure.h"

void afficherTableauPoint(POINT tab[],int taille);
void afficherTableauDoublet(DOUBLET tab[],int taille);
void echangerDoublet(DOUBLET tableau[], int a, int b);
void echangerPoint(POINT tableau[], int a, int b);
double quickSortDoubletMediatrice(DOUBLET tableau[], int debut, int fin);
double quickSortDoubletAngle(DOUBLET tableau[], int debut, int fin);
void quickSortPoint(POINT tableau[], int debut, int fin);
double medianeMediatrice(DOUBLET tableau[],int longueur);
double medianeAngle(DOUBLET tableau[],int longueur);


#endif