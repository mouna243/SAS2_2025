#include <stdio.h>
#include <stdlib.h>
int main() {
    int n ,i;
    printf("Entrer le nombre des élement : ");
    scanf("%d", &n);
    int tab[n];
    
        //remplissage de tableau
    for ( i = 0 ; i < n ; i++) {
       printf("le élément N° %d : ", i+1);
        scanf("%d", &tab[i]);
    } 
    
    // initialisation
       int min = tab[0];
      //  l'étude 
       for (int i = 1 ; i < n ; i++) {
        if (min >tab[i])
            min = tab[i];
       }
       
    printf("le min est :%d \n",min);
    
    return 0;

}
