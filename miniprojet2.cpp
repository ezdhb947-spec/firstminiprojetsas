#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define RESET   "\033[0m"
#define RED     "\033[1;31m"
#define GREEN   "\033[1;32m"
#define YELLOW  "\033[1;33m"
#define BLUE    "\033[1;34m"
#define CYAN    "\033[1;36m"
#define MAGENTA "\033[1;35m"
#define BOLD    "\033[1m"

typedef struct {
	char phone[15]; 
	char nom[25];
	char email[25];
} contacts;

int main(){
	int c;
	int q=0;
	contacts contact[100];
	char recherche[25];
	int i=0;
	int g;
	int n;
	
	
	
	while (c!=6){
	printf("       Bienvenue a ContactHub :    \n");
	printf("veuillez choisir : \n");
	printf("%s1%s pour Ajouter un Contact : \n",GREEN,RESET);
	printf("%s2%s pour Rechercher un Contact : \n",GREEN,RESET);
	printf("%s3%s pour Modifier un Contact : \n",GREEN,RESET);
	printf("%s4%s pour Supprimer un Contact : \n",GREEN,RESET);
	printf("%s5%s pour Afficher Tous les Contacts : \n",GREEN,RESET);
	printf("%s6%s - Quitter\n", RED, RESET);
	scanf("%d",&c);
	switch (c){
    	case 1 :
		printf("%s veuillez entrer le numero du contact : %s",CYAN, RESET);
		scanf("%s",&contact[q].phone);
		printf("%s veuillez entrer le nom du contact : %s",CYAN, RESET);
		scanf("%s",&contact[q].nom);
		printf("%s veuillez entrer le e-mail du contact : %s",CYAN, RESET);
		scanf("%s",&contact[q].email);
		printf("%s Contact ajoutee avec succes . %s \n",GREEN,RESET);
	    q++;
		break;
		
	    case 2 :
	    	
	    printf("%s veuillez entrer le nom du contact a rechercher : %s",CYAN, RESET);
	    scanf("%s",&recherche);
	    for(i=0;i<=q;i++){
	    if (strcmp(contact[i].nom, recherche) == 0) {
	    printf("%s le contact existe .%s \n %s le numero du contact : %s %s \n %s le nom du contact : %s %s \n %s le e-mail du contact : %s %s\n",GREEN,RESET,MAGENTA,RESET,contact[i].phone,MAGENTA,RESET,contact[i].nom,MAGENTA,RESET,contact[i].email);
	    g=1;
		}
		}
		if(g==0) {
		printf("%s le contact n'existe pas . %s \n",RED,RESET);}
		break;
		
		case 3 :  
		printf("%s veuillez entrer le nom du contact a modifier : %s",GREEN,RESET);
	    scanf("%s",&recherche);
	    for(i=0;i<=q;i++){
	    if (strcmp(contact[i].nom, recherche) == 0) {
	    printf("le contact existe .\n");
	    printf("%s le contact existe .%s \n %s le numero du contact : %s %s \n %s le nom du contact : %s %s \n %s le e-mail du contact : %s %s\n",GREEN,RESET,MAGENTA,RESET,contact[i].phone,MAGENTA,RESET,contact[i].nom,MAGENTA,RESET,contact[i].email);
	    
	    printf("%s veuillez entrer le nouveau numero du contact : %s",GREEN,RESET);
	    scanf("%s",&contact[i].phone);
		printf("%s veuillez entrer le nouveau nom du contact : %s",GREEN,RESET);
		scanf("%s",&contact[i].nom);
		printf("%s veuillez entrer le nouveau e-mail du contact : %s",GREEN,RESET);
		scanf("%s",&contact[i].email);
	    g=1;
		}
		}
		if(g==0) {
		printf("%s le contact n'existe pas . %s",RED,RESET);}
		
					
		break;
		
		case 4 :
		printf("%s veuillez entrer le nom du contact a supprimer : %s ",CYAN, RESET);
	    scanf("%s",&recherche);
	    for(i=0;i<=q;i++){
	    if (strcmp(contact[i].nom, recherche) == 0) {
	    printf("%s le contact existe .%s \n %s le numero du contact : %s %s \n %s le nom du contact : %s %s \n %s le e-mail du contact : %s %s\n",GREEN,RESET,MAGENTA,RESET,contact[i].phone,MAGENTA,RESET,contact[i].nom,MAGENTA,RESET,contact[i].email);
	    g=1;
	    printf("%s etes vous sur de vouloir supprimer ce contact ? %s \n (1 pour oui 2 pour non) : ",RED,RESET);
	    scanf("%d",&n);
	    if(n==1){
		
	    for (int j = i; j < q- 1; j++) {
        contact[j] = contact[j + 1];
        }
        q--;
		}
	}
	    else{
	    printf("%s demande annulee .%s",YELLOW,RESET);
	    }
	    }
	    if(g==0) {
	    printf("%s le contact n'existe pas . %s",RED,RESET);}
	    break ;
		
	    case 5: 
	    printf("\n================ La liste des contacts ================\n");
        printf("%-5s %-20s %-15s %-25s\n", "No", "Nom", "num. de telephone ", "Email");
        printf("-------------------------------------------------------\n");

    	for (int i = 0; i < q; i++) {
        printf("%-5d %-20s %-15s %-25s\n",
        i + 1, contact[i].nom, contact[i].phone, contact[i].email);
    	}

    	printf("\n=======================================================\n");

		case 6:
        printf("%s Merci d'avoir utilisé ContactHub !%s\n", CYAN, RESET);
        break;

        default:
        printf("%s Choix invalide. Veuillez réessayez.%s\n", RED, RESET);
			
		}
}

	

	return 0;
		
	
}
