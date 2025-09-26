// Challenge 3 : Passage de Structure en Argument
#include <stdio.h>
struct rectangle{
    float longueur;
    float largeur;
};
void aire (){
    struct rectangle r;
      r.longueur=10;
      r.largeur= 250;
    float aire = longueur*largeur; 
    printf("L'aire = %.2f" , aire);
}
int main() {
    aire();
       return 0;
}