#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int integerA = 1;
    float floatA = 1.1;
    double doubleA = 1.2;
    char letterA = 'A';
    //bool boolean = false;

    //mostrando Variable integerA
    /*printf("El Valor de nuestro entero A es: %i \n", integerA);
    printf("El Valor de mi flotante A es: %f \n", floatA);
    printf("El valor de mi double A es: %d \n", doubleA);
    printf("El valor de mi letter A es: %c", letterA);
    codigo no optimizado */


    //codigo optimizado
    //printf("El Valor de nuestro entero A es: %i \n,El Valor de mi flotante A es: %f \n,El valor de mi double A es: %d \n,El valor de mi letter A es: %c",integerA,floatA,doubleA,letterA);

    printf("ingresa el valor del entero A: ");
    scanf("%i",&integerA);
    printf("El entero A ingresado es: %i", integerA);

    printf("ingresa el valor del Decimal A: ");
    scanf("%f",&floatA);
    printf("El Decimal A ingresado es: %f", floatA);

    printf("ingresa el valor del Decimal largo A: ");
    scanf("%d",&doubleA);
    printf("El Decimal largo A ingresado es: %d", doubleA);

    printf("ingresa el valor del caracter ");
    scanf("%c",&letterA);
    printf("El caracter A ingresado es: %c", letterA);

    return 0;
}
