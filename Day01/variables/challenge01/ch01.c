#include <stdio.h>
int main (){
    // Challenge 1 : Affichage Informations
    char N[20] ,S[10], M[50] ;
    int a ;
    printf ("entre le nom complet :");scanf ("%s", &N);
    printf ("entrer votre age :");scanf ("%d", &a);
    printf ("entrer le sexe  :");scanf ("%s", &S);
    printf ("entrer le mail  :");scanf ("%s", &M);
    printf("%s \n",N);
    printf("%s\n",S);
    printf("%d\n",a);
    printf("%s \n",M);
    return 0;
}