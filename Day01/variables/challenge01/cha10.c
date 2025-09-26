#include <stdio.h>
#include <math.h>
int main (){
float r ,Volume , pi =3.14 ;
printf ("Entrer rayon de la sphère: ");scanf ("%f",&r);
Volume = (4/3) * pi * pow(r,3) ;
printf (" le volume d'une sphère est : %.2f", Volume);
    return 0;
}