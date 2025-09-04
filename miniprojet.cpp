#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
int main() {
	char titre[100][20];
	char auteur[100][20];
	int prix[100];
	int quantite[100];
	int nbrlivre=0;
	int c;
	int g=0;
	char recherche[20];
	int s=0;

	
  while (c!=7){
 printf("veuillez choisir : \n");
 printf("1_ Ajouter un livre au stock. \n");
 printf("2_ Afficher tous les livres disponibles. \n");
 printf("3_ Rechercher un livre par son titre. \n");
 printf("4_ Mettre à jour la quantité d'un livre. \n");
 printf("5_ Supprimer un livre du stock. \n");
 printf("6_ Afficher le nombre total de livres en stock. \n");
 
 
 scanf("%d",&c);
 switch (c){
 	case 1: 
	 printf("veuillez entrer le titre du livre : ");
	 scanf("%s",&titre[nbrlivre]);
	 
	 printf("veuillez entrer l'auteur du livre : ");
	 scanf("%s",&auteur[nbrlivre]);
	 
	 printf("veuillez entrer le prix du livre : ");
	 scanf("%d",&prix[nbrlivre]);
	 
	 printf("veuillez entrer la quantite en stock : ");
	 scanf("%d",&quantite[nbrlivre]);
	 
	  nbrlivre++;
	  break;
	  
	    case 2: printf("les livres disponibles sont : \n");
	    if (nbrlivre==0){
	  	 printf("aucun livre n'est disponible \n");
	  }
       else { 
	   for(int i =0;i<nbrlivre;i++){
       	printf("%s \n %s \n %d \n %d \n",titre[i],auteur[i],prix[i],quantite[i]);
       	
	   }
	   }
		break;
		case 3: 
		printf("veuillez entrer le titre de livre a rechercher : ");
		scanf("%s",&recherche);
	    for(int i =0;i<nbrlivre;i++){
	    if (strcmp(titre[i], recherche) == 0) {
	    	printf("le livre existe .\n");
	    	g=1;
		}
		}
		if(g==0) {
		printf(" le livre n'existe pas . ");}
		break;
		
		case 4: 
		printf("veuillez entrer le titre de livre a modifier : ");
		scanf("%s",&recherche);
	    for(int i =0;i<nbrlivre;i++){
	    if (strcmp(titre[i], recherche) == 0) {
	    printf("donner la nouvelle quantite .\n");
	    scanf("%d",&quantite[i]);
	    	g=1;
		}
		}
		if(g==0) {
		printf(" le livre n'existe pas . ");}
		break;
		
		case 5: 
		printf("veuillez entrer le titre de livre a supprimer : ");
		scanf("%s",&recherche);
	    for(int i =0;i<nbrlivre;i++){
	    	if (strcmp(titre[i], recherche) == 0) {
	    for (int j=i; j<nbrlivre-1;j++) {
        strcpy(titre[j], titre[j+1]);
        strcpy(auteur[j], auteur[j+1]);
        prix[j] = prix[j+1];
        quantite[j] = quantite[j+1];
        }
        nbrlivre--;
        printf("Le livre est supprime.\n");
        g=1;
        break;
		}
		}
		if(g==0) {
		printf(" le livre n'existe pas . ");}
		break;
		case 6: 
		
        for(int i =0;i<nbrlivre;i++){
        s+=quantite[i];
        }
        printf("la somme de quantite de stock est : %d \n",s);
        break;
        default : return 0;

		
 }
 } 
 

	return 0;
	
}
