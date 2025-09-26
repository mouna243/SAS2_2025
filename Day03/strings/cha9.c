// Challenge 9 : Suppression des Espaces
#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() {
    char phrase[100];
    printf ("entrer une phrase : ") ; 
    fgets (phrase , 100 , stdin ); 
    char espace = ' ';
    for (int i = 0 ; i <= 100 ; i++){
        if (espace == phrase[i] ){
            espace = '\0';
        }
    }
     printf ("a%sb ", espace);
       printf("phrase sans espace : %s\n", phrase);
 return 0;
 
}
