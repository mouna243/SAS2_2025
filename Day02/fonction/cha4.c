#include <stdio.h>
int min(int a, int b){
     if (a<b){
         printf(" le plus petit des deux est : %d",a);
     }else if (a>b){
         printf(" le plus petit des deux est : %d",b);
     }else {
         printf(" %d = %d",b ,a);
     }
}

int main (){
    int x,y;
 printf (" Entrer un nomber :");scanf("%d", &x);
 printf (" Entrer un nomber :");scanf("%d", &y);
 min(x,y);

 return 0;
}