// Challenge 8 : Conversion en Minuscules 
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char mot[100];
    printf ("entrer un mot : ") ; 
    fgets (mot , 100 , stdin ); 
    
     for (int i=0 ; i<=sizeof(mot) ; i++ ){
        mot [i]= tolower (mot[i]);
     }
     
       printf("mot en majuscules : %s\n", mot);
 return 0;
}