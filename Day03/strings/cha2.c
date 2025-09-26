// Challenge 2 : Longueur de la Chaîne
#include <stdio.h>

int main() {
    char T[20];
    printf ("Entrer quelque chose : ") ; scanf ("%s", &T);
 for (int i =0 ; i<20 ; i++){
     if ( T[i] ==  '\0') {
         printf("%d", i);
         break;
     }
 }
 
    return 0;
}