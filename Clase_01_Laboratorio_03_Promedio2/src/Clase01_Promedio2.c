/*
 ============================================================================
 Name        : Clase01_Promedio2.c
 Author      : Alejandro Rozas
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void)
{

	int numeroIngresado;
	int acumuladorNumeros;
	int contadorVueltas;
	char confirmarVueltas;
	float promedio;

	contadorVueltas=0;
	confirmarVueltas='s';
	acumuladorNumeros=0;

	while(confirmarVueltas=='s')
	{
		printf("\n Ingrese el número \n");
		scanf("%d",&numeroIngresado);
		printf("\n ¿Desea Continuar? s/n \n");
		__fpurge(stdin);
		scanf("%c",&confirmarVueltas);
		acumuladorNumeros=acumuladorNumeros+numeroIngresado;
		contadorVueltas=contadorVueltas+1;
	}

	promedio=(float)acumuladorNumeros/contadorVueltas;

	printf("\n El promedio es: \n");
	printf("%f", promedio);

	return EXIT_SUCCESS;
}
