// Challenge 1 : Définition et Utilisation de Structure
#include <stdio.h>
#include <string.h>
struct person{
    char nom [40];
    char prenom [40];
    int age ;
};
int main() {
     struct person p1;
     strcpy(p1.nom , "Ali");
     strcpy(p1.prenom , "Alaoui");
     p1.age =12 ;
     printf ("le nom:%s \n le prenom:%s \n l'age :%d" ,p1.nom , p1.prenom,p1.age);
     
 return 0;
 
}
