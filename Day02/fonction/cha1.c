#include <stdio.h>
int somme(int a, int b){
     return a + b;
}

int main (){
    int x,y;
 printf (" Entrer un nomber :");scanf("%d", &x);
 printf (" Entrer un nomber :");scanf("%d", &y);
 somme(x,y);
   printf("la somme = %d",somme(x,y));
 return 0;
}