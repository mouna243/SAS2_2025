//without fonction 
#include <stdio.h>
#include <stdlib.h>
int main() {
 printf("combien des livres trouver " , &m);
int m ;
   do {
    char titre [20] , auteur [20];
    float prix;
    int quantite ;
    
    printf ("Entrer le titre de livre : ");
    scanf ("%s" ,&titre);
    printf ("Entrer l'auteur du livre. : ");
    scanf ("%s" , &auteur);
    printf ("Entrer le prix du livre : ");
    scanf ("%f", &prix);
    printf ("Entrer Quantité en stock: ");
    scanf ("%d", &quantite);
    
  if (quantite != 0) {
      printf("On'a %d livre qui s'apelle %s et écrit par %s et sont prix = %.2f dh \n", quantite, prix , auteur, titre);
  }else {
      printf("On'a %d livre qui s'apelle %s et écrit par %s et sont prix = %f dh ", quantite, prix , auteur, titre);
  }
    printf("si tu veux sortie taper 0 si non taper quellque nomber :");
    scanf("%d ",&m ); 
    
    }while();
    return 0;

}