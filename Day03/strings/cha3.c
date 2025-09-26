// Challenge 3 : Concaténation de Chaînes
#include <stdio.h>
#include <string.h>

int main() {
    char str1 [10];
    char str2 [10];
printf ("entrer une chaine de caractere :");
fgets (str1, sizeof (str1) , stdin );
printf ("entrer une autre chaine de caractere :");
fgets (str2, sizeof (str2) , stdin );
     // suprimmer \n
   str1 [strcspn (str1 ,"\n")] = '\0' ; 
   str2 [strcspn (str2 , "\n")] = '\0';
   
   strcat (str1,str2);
   
   printf ("la chaîne résultante %s" , str1);
   
    return 0;
}