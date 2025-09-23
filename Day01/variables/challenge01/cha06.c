#include <stdio.h>
int main (){
  int a,b;
    printf ("Entrer un nomber A  : ");scanf ("%d",&a);
    printf ("Entrer un nomber B : ");scanf ("%d",&b);
    float d = a/b;
//afficher le resultat
printf ("le nomber A = %d et le nomber B = %d \n",a,b);
 printf ("la somme = %d\n la soustraction : %d\nla multiplication : %d \nla division :%.2f",a+b ,a - b, a * b,d);
    return 0;
}