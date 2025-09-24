#include <stdio.h>
int Inverchain(int a){
   if (a % 2 == 0){
       printf ("paire");
       return 0;
   }else { 
       printf ("impaire");
       return 1;
}
}
int main (){
    int x;
    printf ("entrer un nomber :");scanf("%d",&x);
    Inverchain(x);

 return 0;
}