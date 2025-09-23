#include <stdio.h>
int main (){
   float c;
    printf("Entrer la température en Celsius : "); scanf ("%d",&c);
    if (c<0)
    {
       printf("solide");
    }else if (0<= c && c<100){
       printf("Liquide");
     }else {  
    printf("Gaz");
     };
  
    return 0;
}