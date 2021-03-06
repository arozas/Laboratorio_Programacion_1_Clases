/*
 ============================================================================
 Name        : Clase_02.c
 Author      : Alejandro Alberto Martín Rozas
 Version     : 29/03/2022
 Copyright   :
 Description : Pedir 10 numeros al usuario y mostrar el máximo y el minimo.
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

#define CANTIDAD_DE_VUELTAS 10
#define TRUE 1
#define FALSE 0

//Las define son macros que definen numeros o en algunos casos strings.

int main(void)
{
	short numeroIngresado;
	short contadorVueltas;
	short numeroMaximo;
	short numeroMinimo;
	short ordenIngresoMaximo;
	short ordenIngresoMinimo;

	contadorVueltas=0; //La posición del contador se puede usar para ingresar a la "bandera" entonces en esa posición guarda el dato.

	printf("ESTE PROGRAMA TOMA NÚMEROS Y NOS INFORMA EL MINIMO O MAXIMO INGRESADO \n");

	//do
	//{}
	//while(contadorVueltas++);

	//El dowhile no necesita condicion para entrar, la condición solo indica si sigue.

	// el for es generalmente usado para bucles fijos, digase cuando son vueltas predefinidas
	// cuando no sabés las vueltas es mejor usar el do while o el while.
	// las banderas se pueden replamzar con contadores cuando no hay más de un flag.
	// por que si no entra el resto de las banderas.

	// Inicia la variable	//condición bucle	//lo que sucede antes de terminar.
	for(contadorVueltas = 0 ; contadorVueltas < CANTIDAD_DE_VUELTAS ; contadorVueltas++)
	{
		printf("Ingrese un número entero positivo o negativo: \n");
		scanf("%hi", &numeroIngresado);
		if(contadorVueltas==0)
		{
			numeroMaximo=numeroIngresado;
			numeroMinimo=numeroIngresado;
			ordenIngresoMaximo=contadorVueltas+1;
			ordenIngresoMinimo=contadorVueltas+1;
			printf("El primer número máximo y mínimo es: %hi \n", numeroIngresado);
		}
		else
		{
			if(numeroMaximo<numeroIngresado)
			{
				numeroMaximo=numeroIngresado;
				ordenIngresoMaximo=contadorVueltas;
				printf("El nuevo máximo es: %hi \n", numeroMaximo);
				printf("Se ingresó en el orden: %hi \n", ordenIngresoMaximo);
			}
			else
			{
				if(numeroMinimo>numeroIngresado)
				{
					numeroMinimo=numeroIngresado;
					ordenIngresoMinimo=contadorVueltas;
					printf("El nuevo mínimo es: %hi \n", numeroMinimo);
					printf("Se ingresó en el orden: %hi \n", ordenIngresoMinimo);
				}
			}
		}

	}
	printf("FINALIZÓ EL PROGRAMA");
	return EXIT_SUCCESS;
}
