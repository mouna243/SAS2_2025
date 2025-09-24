#include <stdio.h>
int Factorielle(int a){
    int b=1;
     for (int i = 1 ; i <= a ; i++){
         printf("%d " , i);
           b=b * i;
            printf("x ");
     }
     printf("= %d  " , b);
}

int main (){
    int x,y;
 printf (" Entrer un nomber :");scanf("%d", &x);
 printf ("%d! = ", x);
 Factorielle(x);

 return 0;
}