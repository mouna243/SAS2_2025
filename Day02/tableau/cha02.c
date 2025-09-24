#include <stdio.h>
int main() {
    int n ;
    printf("Entrer le nombre des élement : ");
    scanf("%d", &n);
    int tab[n];
    for (int i = 0 ; i < n ; i++) {
        
        printf("le élément N° %d : ", i+1);
        scanf("%d", &tab[i]);
        
    }
    for (int i = 0 ; i<n ; i++) {
        printf("%d \n", tab[i]);
    }
    
    return 0;
}