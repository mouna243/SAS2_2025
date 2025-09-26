// Challenge 7 : Conversion en Majuscules
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char mot[100];
    printf ("entrer un mot : ") ; 
    fgets (mot , 100 , stdin ); 
    
     for (int i=0 ; i<=sizeof(mot) ; i++ ){
        mot [i]= toupper (mot[i]);
     }
     
       printf("mot en majuscules : %s\n", mot);
 return 0;
 
}