#include <stdio.h>
int main (){
    // Challenge 1 : Affichage Informations
    char N[20] ,S[10], M[50] ;
    int a ;
    printf ("entre le nom complet :");scanf ("%s", &N);
    printf ("entrer votre age :");scanf ("%d", &a);
    printf ("entrer le sexe  :");scanf ("%s", &S);
    printf ("entrer le mail  :");scanf ("%s", &M);
    printf("%s \n",N);
    printf("%s\n",S);
    printf("%d\n",a);
    printf("%s \n",M);
    // Challenge 2 : Conversion de la température
    float K ,C;
    printf ("Entrer la température en Celsius : ");scanf ("%f", &C);
    K = C + 273.15;
    printf("la température en Kelvin est : %f",K); 
    //Challenge 3 : Conversion de la distance
    double Km ,Yards;
    printf("entrer lq distance en kilomètres "); scanf("%lf",&Km);
    Yards = Km * 1093.61;
    printf ("%lf Km = %lf Yards" , Km , Yards);
    //Challenge 4 : Conversion de la vitesse
    double Kmh ,ms;
    printf("entrer la vitesse en kilomètres par heure (km/h) "); scanf("%lf",&Kmh);
    ms = kmh* 0.27778;
    printf ("%lf km/h = %lf m/s");
    //Challenge 6 : Calcul et affichage des résultats
    int a,b;
    printf ("Entrer un nomber A  : ");scanf ("%f", &a);
    printf ("Entrer un nomber B : ");scanf ("%f", &b);
//afficher le resultat
printf ("le nomber A = %d et le nomber B = %d",a,b);
printf ("la somme = %d\n la soustraction : %d\nla multiplication : %d \nla division :%f",a+b ,a - b, a * b,a / b);
//Challenge 8 : Calcul de la moyenne géométrique
int a,b,c;
float Moyenne_géométrique;
 printf ("Entrer un nomber a: ");scanf ("%f", &a);
 printf ("Entrer un nomber b : ");scanf ("%f", &b);
 printf ("Entrer un nomber c : ");scanf ("%f", &c);
 Moyenne_géométrique = (a * b * c)^(1/3);
printf ("Moyenne_géométrique = (a * b * c)^(1/3) = %f ",Moyenne_géométrique);

//Challenge 10 : Volume d'une sphère
float r ,Volume , π =3.14 ;
printf ("Entrer rayon de la sphère: ");scanf ("%f",&r);
Volume = (4/3) * π * r^(3);
printf (" le volume d'une sphère est : %f", Volume);
//Challenge 11 : Surface d'un rectangle
float S,L,l ;
printf ("entrer la longueur : ");scanf("%f",&L);
printf ("entrer la largeur : ");scanf("%f",&l);
S=L*l;
printf ("la surface = %f",S );


}