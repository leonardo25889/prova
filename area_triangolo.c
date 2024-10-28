#include <stdio.h>

int main()
{
    float base, altezza;
    double area_triangolo;

    //Input base e altezza
    printf("Inserisci la base del triangolo: ");
    scanf("%f", &base);
    printf("Inserisci l'altezza del triangolo: ");
    scanf("%f", &altezza);

    //Calcolo area
    area_triangolo = (base*altezza)/2;
    
    //Stampo l'area
    printf("Area del triangolo: %f\n", area_triangolo);
    return 0;
}