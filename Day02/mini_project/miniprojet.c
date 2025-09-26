// le mini projet
#include <stdio.h>
#include <string.h>
int main() {
  int num_livre =100;
  int num_titre = 50;
  int num_auteur=50;
    //tab pour stocker les livre 
    char titrerech[100];
    char titre [num_livre][num_titre];
    char auteur [num_livre][num_auteur];
    float prix [num_livre];
    int quantite [num_livre];
    int id [num_livre];
    int nouvelleQuantite;
    int trouver = 0;
    
    int nomberlivre=0;
    int choix ;
    // menu 
 while (1) {
        printf("\n1. Ajouter un livre");
        printf("\n2. Afficher tous les livres");
        printf("\n3. Rechercher un livre par titre");
        printf("\n4. Mettre a jour la quantite");
        printf("\n5. Supprimer un livre");
        printf("\n6. Afficher le nombre total de livres");
        printf("\n7. Quitter");
        printf("\nVotre choix : ");
        scanf("%d", &choix);
    
        
    // ajouter un livre **
        if (choix == 1) { 
            if (nomberlivre >= num_livre) {
                printf("Pas de stock\n");
                continue;
            }
    printf("les information de livre \n");
    printf ("Entrer le titre de livre : ");
    scanf ("%s" ,&titre);
    printf ("Entrer l'auteur du livre. : ");
    scanf ("%s" , &auteur);
    printf ("Entrer le prix du livre : ");
    scanf ("%f", &prix);
    printf ("Entrer Quantité en stock: ");
    scanf ("%d", &quantite); 
    nomberlivre++;
    
    printf ("le livre à éte ajouter ");
        } 
        //Afficher tous les livres**
        else if (choix == 2) { 
            if (nomberlivre == 0) {
                printf("Aucun livre dans le stock.\n");
                continue;
            }
            
            printf("\nListe des livres :\n");
            // Boucle pour afficher tous les livres
            for (int i = 0; i < nomberlivre; i++) {
                printf("| Titre: %s | Auteur: %s | Prix: %.2f | Quantite: %d\n",
                       titre[i], auteur[i], prix[i], quantite[i]);
            }
    if (nomberlivre==0)
    {
        printf ("---\n");
        printf ("aucun livre à été ajouter ");
        printf ("---\n");
        
    }else {
        // affichge de toute les livres 
        for (int i =0; i>= nomberlivre ; i++){
        printf("On'a %d livre qui s'apelle %s et écrit par %s et sont prix = %.2f dh \n", quantite[i], prix[i] , auteur[i], titre[i]);
        }
    }
        // recherch par titre 
    // Rechercher un livre par titre
        }
        //RECHERCH
         else if (choix == 3) {
             
              char livrerech[50];
              if (nomberlivre == 0) {
                printf("Aucun livre dans le stock.\n");
                break;
            }
            else if (nomberlivre > 0){
            printf ("Entrer le titre de livre : "); 
            scanf("%s" , &livrerech);
          
            
            for (int i = 0; i < nomberlivre; i++) {
                if (strcmp (livrerech , titre[i])==0) {
                    printf ("les donner de livre trouver : \n");
                    printf("le Titre: %s , l'Auteur: %s ,le Prix: %.2f , la Quantite: %d\n",
                       titre[i], auteur[i], prix[i], quantite[i]);
                }else {
                    printf(" le livre n'est pas trouver !!");
            }
         
         }
         }
         }
         
         
         
        //QUANTITE
        else if (choix == 4) { 
                        if (nomberlivre == 0) {
                printf("Aucun livre dans le stock.\n");
                continue;
            }else{
            
            int nouvelleQuantite;
            char *titrerech;
            printf("Titre du livre : ");
            scanf("%d", &titrerech);                        
            if (nomberlivre == 0) {
                printf("Aucun livre dans le stock.\n");
                continue;
            }
            
            
            // Boucle pour trouver le livre
            for (int i = 0; i < nomberlivre; i++) {
             if (strcmp (livrerech , titre[i])==0) {
                    printf("Livre trouve : %s\n", titre);
                    printf("Nouvelle quantite : ");
                    scanf("%d", &nouvelleQuantite);
                    quantite[i] = nouvelleQuantite;
                    printf("Quantite mise a jour !\n");
                    
                  
                }
            }
            
    }
         }
    //Supprimer un livre
         else if (choix == 5){
            
            
        
    }
    //Afficher le nombre total de livres**
         else if (choix == 6){
              printf("le nomber totale de livre : %d .\n" , nomberlivre );
         
     }
     //quitter **
         else if (choix == 7){
         break;
     }
     
 }
    
    return 0;
 }
