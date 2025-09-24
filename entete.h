#ifndef _entete_H
#define _entete_H

#include<stdio.h> 
#include<stdbool.h> 
#include <string.h>
#include <stdlib.h>


#define TMAX 1000

int matrice1[TMAX][TMAX], matrice2[TMAX][TMAX], matrice3[TMAX][TMAX];

typedef struct {  // structure de donnee pour representer un vecteur de trois dimension
	float x, y, z;
} vecteur3D;


void additionMatrice (int A[TMAX][TMAX], int B[TMAX][TMAX], int C[TMAX][TMAX], int n, int m);
void produitMatrice (int A[TMAX][TMAX], int B[TMAX][TMAX], int C[TMAX][TMAX], int n, int m, int p);
int rechercheElement (int tab[], int n, int element);
int produitParAddition (int a, int b);
int estCroissant (int tab[], int n);
int estDecroissant (int tab[], int n);
double trouverMedian(int tab[], int n);
void inverseTableau (int tab[], int n);
vecteur3D produitVectoriel (vecteur3D v1, vecteur3D v2);
void afficherVecteur3D (vecteur3D);
void produitVecteurMatrice(int A[TMAX][TMAX], int V[], int R[], int n, int m);
void afficherVecteur (int V[], int n);
void afficherMatrice (int A[TMAX][TMAX], int n, int m); 
void initialiserMatrice(int A[TMAX][TMAX], int n, int m);
#endif
