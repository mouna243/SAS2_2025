// Challenge 9 : Suppression des Espaces
# include <stdio.h>
# include <string.h>
 int main ()
 {   
     char phrase [50];
     
     printf ("entrer une phrase :"); 
    //  scanf(" %[^\n]", phrase);
     fgets (phrase ,50, stdin);
     if (phrase == '\0') {
         printf ("aucune valeur ");
     }else {
     int size = sizeof (phrase)/sizeof (phrase[0]);
     
     for (int j =0; j<size ; j++){
         if ( phrase [j] == ' '){
             phrase[j] = phrase[j-1] ; 
               printf ("%s" , phrase);
         }
     }
     }
     
    
 }