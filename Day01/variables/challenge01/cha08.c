#include <stdio.h>
int main (){
int a,b,c;
float Moyenne_géométrique;
 printf ("Entrer un nomber a: ");scanf ("%d", &a);
 printf ("Entrer un nomber b : ");scanf ("%d", &b);
 printf ("Entrer un nomber c : ");scanf ("%d", &c);
 Moyenne_géométrique = (a * b * c)^(1/3);
printf ("Moyenne_géométrique = (a * b * c)^(1/3) = %f ",Moyenne_géométrique);
    return 0;
}