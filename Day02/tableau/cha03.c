#include <stdio.h>
int main() {
    int n ;
    int som =0 ;
    printf("Entrer le nombre des élement : ");
    scanf("%d", &n);
    int tab[n];
    for (int i = 0 ; i < n ; i++) {
        
        printf("le élément N° %d : ", i+1);
        scanf("%d", &tab[i]);
        som=som + tab[i];
      
    }
   
      printf("%d \n", som);
    return 0;
}
