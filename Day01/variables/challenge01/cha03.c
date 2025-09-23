#include <stdio.h>
int main (){
double Km ,Yards;
    printf("entrer la distance en kilomètres :"); scanf("%lf",&Km);
    Yards = Km * 1093.61;
    printf ("%lf Km = %lf Yards" , Km , Yards);
    
    return 0;
}