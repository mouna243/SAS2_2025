// Challenge 4 : Comparaison de Chaîne
#include <stdio.h>
#include <string.h>

int main() {
    char str1 [10];
    char str2 [10];
    
printf ("entrer une chaine de caractere :");
fgets (str1, sizeof (str1) , stdin );
printf ("entrer une autre chaine de caractere :");
fgets (str2, sizeof (str2) , stdin );

   if (strcmp (str1 , str2) == 0){
       printf ("les deux chaine sont le meme");
   }else {
       printf ("la chaine est non pas le meme");
   }
   
   
    return 0;
}