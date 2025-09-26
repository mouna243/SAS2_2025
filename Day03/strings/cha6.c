// Challenge 6 : Compte des Occurrences d'un Caractère
#include <stdio.h>
#include <string.h>
int main() {
        char str1[10];
        char str2 [10];

        // la chaine 
printf ("entrer une chaine de caractere :");
fgets (str1 , sizeof (str1) , stdin );
 
        // le caractere 
printf ("entrer le caractere :");
fgets (str2 , sizeof (str2) , stdin );
 char c = str2[10];
 int cha = 0 ; 
  
   for (int i = 0 ; i <= 10 ; i++ ){
            if (  str1[i] ==c ) {
          cha++;
       }else {
           break;
       }
         
   }
    printf ("le caractère %s trouver %d fois dans %s" , str2 , cha  ,str1);

 return 0;
}