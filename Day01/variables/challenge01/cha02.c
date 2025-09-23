#include <stdio.h>
int main (){
  float K ,C;
    printf ("Entrer la température en Celsius : ");scanf ("%f", &C);
    K = C + 273.15;
    printf("la température en Kelvin est : %f",K);
    return 0;
}