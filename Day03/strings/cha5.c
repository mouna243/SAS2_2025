// Challenge 5 : Inversion de Chaîne

#include <stdio.h>
#include <string.h>
int invrc(){
        char str1 [10];
printf ("entrer une chaine de caractere :");
fgets (str1, sizeof (str1) , stdin );

 char size = sizeof (str1) / sizeof (str1[0]);
 
   for (int i = size; i >= 0 ; i-- ){
       printf ("%c " , str1[i]);
       
   }
}

int main() {
 invrc();
 return 0;
}