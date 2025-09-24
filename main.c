#include "entete.h"

int main()
{
	int choix,ligne, colonne, p,x, a, b, tab[TMAX], R[TMAX];
	vecteur3D vecteur1, vecteur2;
	do{
	
	
		printf ("bienvenu dans ce programme \n");
		printf ("que souhaiter vous faire\n\n");
		printf ("\t1. somme de matrices\n");
		printf ("\t2. produit de matrices\n");
		printf ("\t3. recherche sequentielle dans un tableau\n");
		printf ("\t4. produit de deux nombres en utilisant que des addition de 1\n");
		printf ("\t5. tester si un tableau est trie\n");
		printf ("\t6. trouver le median dans un tableau\n");
		printf ("\t7. produit vectoriel de deux vecteurs\n");
		printf ("\t8. inverser un tableau\n");
		printf ("\t9. produit vecteur matrice\n");
		printf ("\t10. sortir du programme\n");
		
		printf ("votre choix:\n");
		scanf ("%d", &choix);
		
		switch (choix)
		{
			case 1 :
				printf ("entrez le nombre de lignes des matrices\n");
				scanf ("%d", &ligne);
				printf ("entrez le nombre de colonnes des matrices\n");
				scanf ("%d", &colonne);
				
				printf ("entrez les elements de la premiere matrices\n");
				 initialiserMatrice (matrice1, ligne, colonne);
				
				printf ("entrez les elements de la deuxieme matrices\n");
				 initialiserMatrice (matrice2, ligne, colonne);
				 
					printf ("matrice1\n");
					afficherMatrice (matrice1, ligne, colonne);
					
					printf ("matrice2\n");
					afficherMatrice (matrice2, ligne, colonne);
					additionMatrice (matrice1, matrice2,matrice3, ligne, colonne);
					
					printf ("resultat\n\n");
					afficherMatrice (matrice3, ligne, colonne);
					
				break;
			case 2 :
				printf ("entrez le nombre de lignes de la matrice1 \n");
				scanf ("%d", &ligne);
				printf ("entrez le nombre de colonnes de la matrice1 et nombre de ligne de la matrice2\n");
				scanf ("%d", &colonne);
				printf ("entrez le nombre de colonne de la matrice2 \n");
				scanf ("%d", &p);
				
				printf ("entrez les elements de la premiere matrices\n");
				 initialiserMatrice (matrice1, ligne, colonne);
				
				printf ("entrez les elements de la deuxieme matrices\n");
				 initialiserMatrice (matrice2, colonne, p);
				 produitMatrice (matrice1, matrice2, matrice3, ligne, colonne, p);
				 
				 printf ("matrice1\n");
					afficherMatrice (matrice1, ligne, colonne);
					
					printf ("matrice2\n");
					afficherMatrice (matrice2, colonne, p);
					
					printf ("resultat\n\n");
					afficherMatrice (matrice3, ligne, p);
				 break;
				 
			case 3 :
				printf ("entrez le nombre d'element du tableau : ");
				scanf ("%d", &p);
				for (int i = 0 ; i < p; i ++){
					printf ("entrez l'element numero %d :", i + 1);
					scanf ("%d", &tab[i]);
					}
				printf ("entrez l'element a cherche :\n ");
				scanf ("%d", &x);
				
		 		if (rechercheElement (tab, p, x) != 0){
		 			printf ("element trouver a la position numero %d \n", rechercheElement(tab, p, x) + 1);
		 			}
		 		else
		 			printf ("element non trouver\n\n");
		 		break;
		 		
		 	case 4 :
		 		printf ("entrez les deux nombres : ");
		 		scanf ("%d %d", &a, &b);
		 		
		 		printf ("le produit par addition de 1 de %d et %d est %d\n", a, b, produitParAddition(a, b));
		 		
		 		break;
		 	case 5 :
		 		printf ("entrez le nombre d'element du tableau : ");
				scanf ("%d", &p);
				for (int i = 0 ; i < p; i ++){
					printf ("entrez l'element numero %d :", i + 1);
					scanf ("%d", &tab[i]);
					}
				if ( estCroissant(tab, p) )
					printf("le tableau est trie par ordre croissant");
				else if ( estDecroissant(tab ,p) )
					printf ("le tableau est trie par ordre decroissant");
				else
					printf (" le tableau n'est pas trie");
				
				break;
				
			case 6 :
				printf ("entrez le nombre d'element du tableau : ");
				scanf ("%d", &p);
				for (int i = 0 ; i < p; i ++){
					printf ("entrez l'element numero %d :", i + 1);
					scanf ("%d", &tab[i]);
					}
				printf (" le median du tableau est %f\n\n ", trouverMedian(tab, p));
                 
                 break;
                  
                  case 7 :
                  
                  	printf (" entrez les coordonnees du premier vecteur: ");
                  	scanf("%f %f %f", &vecteur1.x, &vecteur1.y, &vecteur1.z);
                  	printf (" entrez les coordonnees du deuxieme vecteur: ");
                  	scanf("%f %f %f", &vecteur2.x, &vecteur2.y, &vecteur2.z);
                  	
                  	printf (" vecteur 1 :");
                  	afficherVecteur3D(vecteur1);
                  	
                  	printf ("vecteur 2 :");
                  	afficherVecteur3D(vecteur2);
                  	
                  	vecteur3D resultat = produitVectoriel(vecteur1, vecteur2);
			printf ("le produit vectoriel des deux vecteurs est :\n\n");
			afficherVecteur3D(resultat);
			
			break;
			
		case 8 :
			printf ("entrez le nombre d'element du tableau : ");
				scanf ("%d", &p);
				for (int i = 0 ; i < p; i ++){
					printf ("entrez l'element numero %d :", i + 1);
					scanf ("%d", &tab[i]);
					}
				inverseTableau (tab, p);
			printf("le tableau inverse est :\n\n");
			
			for (int i = 0; i < p ; i++){
				printf(" %d ", tab[i]);
				}
			break;
		case 9 :
			printf ("entrez le nombre de lignes de la matrice\n");
				scanf ("%d", &ligne);
				printf ("entrez le nombre de colonnes de la matrice\n");
				scanf ("%d", &colonne);
				
				printf ("entrez les elements de la matrice\n");
				 initialiserMatrice (matrice1, ligne, colonne);
				 
					printf ("matrice1\n");
					afficherMatrice (matrice1, ligne, colonne);
			
				for (int i = 0 ; i < colonne; i ++){
					printf ("entrez l'element numero %d du vecteur :", i + 1);
					scanf ("%d", &tab[i]);
					}
			produitVecteurMatrice(matrice1, tab, R, ligne, colonne);
			printf("resultat:\n\n");
			for (int i = 0; i < colonne ; i ++){
				
				printf(" %d ", R[i]);
				}
			break;
			
			case 10 :
				printf("\nau revoir\n\n");
			break;
            default : 
                printf("\nERREUR : Vous devez choisir un nombre entre 0 et 6\n\n");
                 
                break;
        }
    
    }
    while(choix !=10);

    return 0;
					 
	}
