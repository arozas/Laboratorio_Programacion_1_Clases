/*
 * Validaciones.c
 *
 *  Created on: 1 abr. 2022
 *      Author: Alejandro Alberto Martín Rozas
 *      Biblioteca de validaciones.
 *      Versión 0.1 del 01 de abril de 2022
 */
#include "Validaciones.h"

void validarOpcionNum(int numeroValidar, int numero1, int numero2, short* opcionIngresada)
{
	while(numeroValidar<numero1 || numeroValidar>numero2)
	{
		printf("\nERROR INGRESE UN NUMERO ENTRE <%d-%d>:", numero1,numero2);
		scanf("%d",&numeroValidar);
		(*opcionIngresada)=(short)numeroValidar;
	}
}



