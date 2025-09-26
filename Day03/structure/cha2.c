// Challenge 2 : Structure avec Tableau
#include <stdio.h>
#include <string.h>
struct rectangle{
    char nom [20];
    char prenom[20];
    float note[][20];
};
int main() {
    struct rectangle r ; 
    strcpy (r.nom ,"ali");
    strcpy (r.prenom ,"alawi");
    
    printf ("----les information d'étudient----"); 
    printf("le nom : %s \n le prenom : %s \n" ,r.nom , r.prenom );
       return 0;
}