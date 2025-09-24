#include "entete.h"

void additionMatrice (int A[TMAX][TMAX], int B[TMAX][TMAX], int C[TMAX][TMAX], int n, int m)
{
	for( int i = 0 ; i < n ; i++)
	{
		for ( int j = 0; j < m; j++)
		{
			C[i][j] = A[i][j] + B[i][j];
			}
		}
	}
	

void produitMatrice (int A[TMAX][TMAX], int B[TMAX][TMAX], int C[TMAX][TMAX], int n, int m, int p)
{
	for( int i = 0 ; i < n ; i++)
	{
		for ( int j = 0; j < p; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < m; k++)
			{
				C[i][j] += A[i][k] * B[k][j];
				}
			}
		}
	}
	
int rechercheElement (int tab[], int n, int element)
{
	for( int i = 0 ; i < n ; i++)
	{
		if (tab[i] == element)
		{
			return i;// element trouve a la position i
			}
		}
	return 0;// elemrnt non trouver
}

int produitParAddition (int a, int b)
{
	int resultat = 0;
	for( int i = 0 ; i < b ; i++)
	{
		resultat += a;
		}
	return resultat;
}


int estCroissant (int tab[], int n)
{
	for( int i = 0 ; i < n - 1 ; i++)
	{
		if ( tab[i] > tab[i+1])
		{
			return 0; //le tableau n'est pas trie
			}
		}
	return 1;// le tableau est trie
} 
		
		
int estDecroissant (int tab[], int n)
{
	for( int i = 0 ; i < n - 1 ; i++)
	{
		if ( tab[i] < tab[i+1])
		{
			return 0; //le tableau n'est pas trie
			}
		}
	return 1;// le tableau est trie
} 
		
double trouverMedian(int tab[], int n)
{
	if (n % 2 == 0){
		return (tab[(n / 2) ] + tab[n / 2] + 1) / 2;
		} else {
			return tab[n / 2];
			}
		}
		
void inverseTableau (int tab[], int n){
	int debut = 0;
	int fin = n - 1;
	int temp;
	
	while (debut < fin)
	{
		temp = tab[debut];
		tab[debut] = tab[fin];
		tab[fin] = temp;
		debut ++;
		fin --;
		}
	}
vecteur3D produitVectoriel (vecteur3D v1, vecteur3D v2)
{
	vecteur3D resultat;
	resultat.x = v1.y * v2.z - v1.z * v2.y;
	resultat.y = v1.z * v2.x - v1.x * v2.z;
	resultat.z = v1.x * v2.y - v1.y * v2.x;
	
	return resultat;
	}
	
	
void afficherVecteur3D (vecteur3D v)
{
	printf ("(%.2f, %.2f, %.2f)\n", v.x, v.y, v.z);
	}
	
void produitVecteurMatrice(int A[TMAX][TMAX], int V[], int R[], int n, int m)
{
	for (int i = 0; i < n; i ++){
		R[i] = 0;
		for (int j = 0 ; j < m; j ++){
			R[i] += A[i][j] * V[j];
			}
		}
	}
void afficherVecteur (int V[], int n){
	for (int i = 0 ; i < n ; i ++){
		printf ("%d", V[i]);
		}
	printf ("\n");
}

void afficherMatrice (int A[TMAX][TMAX], int n, int m)
{
	 for( int i = 0 ; i < n ; i++)
	{
		for ( int j = 0; j < m; j++)
		{
			printf(" %d ", A[i][j]);
			}
			printf ("\n");
		}
	
	}
void initialiserMatrice(int A[TMAX][TMAX], int n, int m){
	for (int i = 0; i < n ; i ++)
	{
		for (int j = 0; j< m; j ++)
		{
	printf ("entrez l'elements [%d][%d] : ",i ,j);
			scanf ("%d ", &A[i][j]);
			}
		}
	}

