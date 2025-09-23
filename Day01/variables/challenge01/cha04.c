#include <stdio.h>
int main (){
float Kmh ,ms;
    printf("entrer la vitesse en kilomètres par heure (km/h) : "); scanf("%f", &Kmh);
    ms = Kmh * 0.27778;
    printf ("%.2f km/h = %.2f m/s",Kmh,ms);
    return 0;
}