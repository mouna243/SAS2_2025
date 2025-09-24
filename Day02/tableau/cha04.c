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
       int max = tab[0];
      //  l'étude 
       for (int i = 1 ; i < n ; i++) {
        if (max < tab[i])
            max = tab[i];
       }
       
    printf("le max est :%d \n",max);
    
    return 0;

}
