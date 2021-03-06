/*
 ============================================================================
 Name        : Clase_02_Programacion.c
 Author      : Alejandro Alberto Martín Rozas
 Version     :
 Copyright   : 24/03/2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "BliotecaDeOperaciones.h"
/*CABECERAS
float sumar (float numero1, float numero2);
float restar (float numero1, float numero2);
float multiplicar (float numero1, float numero2);
float dividirInt (int numero1, int numero2);
float dividirFloat (float, float);
*/
//------------------------------------
int main(void)
{
	char 	operacionIngresada;
	int 	primerNumeroIngresado;
	int 	segundoNumeroIngresado;
	float	resultadoOperacion;
	char	respuestaUsuario;

	respuestaUsuario='s';
	printf("ESTE PROGRAMA ES UNA CALCULADORA BÁSICA \n");

	do
	{
		printf("Eliga una operación a realizar: \n Sumar[s],Restar[r],Multiplicar[m],Dividir[d], DividirFloat[f] \n");
		__fpurge(stdin);
		scanf("%c",&operacionIngresada);
		printf("Ingrese el primer numero: \n");
		scanf("%d",&primerNumeroIngresado);
		printf("Ingrese el segundo numero: \n");
		scanf("%d",&segundoNumeroIngresado);
		switch(operacionIngresada)
		{
		case 's':
			resultadoOperacion=sumar(primerNumeroIngresado,segundoNumeroIngresado);
			break;
		case 'r':
			resultadoOperacion=restar(primerNumeroIngresado,segundoNumeroIngresado);
			break;
		case 'm':
			resultadoOperacion=multiplicar(primerNumeroIngresado,segundoNumeroIngresado);
			break;
		case 'd':
			resultadoOperacion=dividirInt(primerNumeroIngresado,segundoNumeroIngresado);
			break;
		case 'f':
			resultadoOperacion=dividirFloat(primerNumeroIngresado,segundoNumeroIngresado);
			break;
		}
		printf("El resultado de la operación es: %.2f \n\n", resultadoOperacion);
		printf("¿desea continuar? [s/n] \n");
		__fpurge(stdin);
		scanf("%c",&respuestaUsuario);
	}
	while(respuestaUsuario=='s');

	printf("PROGRAMA FINALIZADO \n");
	return EXIT_SUCCESS;
}
//-----------------------------------------------------------------
//DESAROLLO
/*float sumar (float numero1, float numero2)
{
	float resultado;
	resultado=numero1+numero2;
	return resultado;
}
float restar (float numero1, float numero2)
{
	float resultado;
	resultado=numero1-numero2;
	return resultado;
}
float multiplicar (float numero1, float numero2)
{
	float resultado;
	resultado=numero1*numero2;
	return resultado;
}
float dividirInt (int numero1, int numero2)
{
	float resultado;
	resultado=(float)numero1/numero2;
	return resultado;
}
float dividirFloat (float numero1, float numero2)
{
	float resultado;

	resultado=(float)numero1/numero2;

	return resultado;
}*/
