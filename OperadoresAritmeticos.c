#include <stdio.h>
#include <stdlib.h>
#include <float.h>

int main()
{

    int Radio;
    int Altura;
    int Area;
    int Volumen;
    float pi = 3.1416;

    printf("Mostraremos el Calculo de Volumen de un Cilindro \n");

    printf("Ingresa el radio de la base: ");
    scanf("%i",&Radio);

    printf("Ingresa la Altura del Cilindro: ");
    scanf("%i", &Altura);

    //Espacio para el Calculo

    Area = pi * (Radio * Radio);
	Volumen =  Area * Altura;

	printf("El area de la base es: %i \n", Area);
	printf("El volumen del cilindro es: %i \n", Volumen);

    printf(":::::::::::::::::::::::::::::::::::::::::::::::::: \n");

/* DE Fahrenheit A Celcius */
	float cel;
	float fah;

	printf("Convertir Fahrenheit a Celcius\n");
	printf("Ingresa temperatura en Fahrenheit: ");
	scanf("%f", &fah);

	cel = ((fah - 32) * 5)/9;

	printf("La temperatura en grados Celcius es: %f", cel);

    return 0;
}
