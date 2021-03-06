/*
 ============================================================================
 Name        : Calculadoras Operaciones Básicas.c
 Author      : Alejandro Alberto Martín Rozas
 Version     : 0.1 del 01 de abril de 2022
 Copyright   :
 Objetive	 : Tomar numeros ingresados por el usuario
 	 	 	   y realizar operaciones matématicas simples.
 ============================================================================
 */

#include "Operaciones.h"
#include "Entrada.h"

#define TRUE  1
#define FALSE 0

int main(void)
{
	float numeroIngresadoUno;
	float numeroIngresadoDos;
	float resultadoObtenido;

	do
	{
		switch(menuUno("CALCULADORA EN C", "OPERACIONES BÁSICAS", "OTRAS OPERACIONES"))
		{
		case 1:
			switch(menuTres("OPERACIONES BÁSICAS", "SUMAR", "RESTAR", "MULTIPLICAR", "DIVIDIR"))
			{
			case 1:
				do
				{
					ingresoNumero("INGRESE UN NÚMERO", &numeroIngresadoUno);
					ingresoNumero("INGRESE OTRO NÚMERO", &numeroIngresadoDos);
					sumar(numeroIngresadoUno, numeroIngresadoDos, &resultadoObtenido);
					printf("\n RESULTADO: %.2f", resultadoObtenido);
				}while(menuUno("¿DESEA CONTINUAR SUMANDO?", "SI", "NO")==TRUE);
				break;
			case 2:
				do
				{
					ingresoNumero("INGRESE UN NÚMERO", &numeroIngresadoUno);
					ingresoNumero("INGRESE OTRO NÚMERO", &numeroIngresadoDos);
					restar(numeroIngresadoUno, numeroIngresadoDos, &resultadoObtenido);
					printf("\n RESULTADO: %.2f", resultadoObtenido);
				}while(menuUno("¿DESEA CONTINUAR RESTANDO?", "SI", "NO")==TRUE);
				break;
			case 3:
				do
				{
					ingresoNumero("INGRESE UN NÚMERO", &numeroIngresadoUno);
					ingresoNumero("INGRESE OTRO NÚMERO", &numeroIngresadoDos);
					multiplicar(numeroIngresadoUno, numeroIngresadoDos, &resultadoObtenido);
					printf("\n RESULTADO: %.2f", resultadoObtenido);
				}while(menuUno("¿DESEA CONTINUAR MULTIPLICANDO?", "SI", "NO")==TRUE);
				break;
			default:
				do
				{
					ingresoNumero("INGRESE UN NÚMERO", &numeroIngresadoUno);
					ingresoNumero("INGRESE OTRO NÚMERO", &numeroIngresadoDos);
					if (dividir(numeroIngresadoUno, numeroIngresadoDos, &resultadoObtenido)==TRUE)
					{
						printf("\n RESULTADO: %.2f", resultadoObtenido);
					}
					else
					{
						printf("ERROR, NO SE PUEDE DIVIDIR POR CERO \n");
					}
				}while(menuUno("¿DESEA CONTINUAR DIVIDIENDO?", "SI", "NO")==TRUE);
				break;
			}
			break;
			default:
				switch(menuUno("OTRAS OPERACIONES", "RESTO", "PRODUCTO"))
				{
				case 1:
				break;
				default:
				break;
				}
				break;
		}
	}while(menuUno("¿DESEA CONTINUAR OPERANDO?", "SI", "NO")==TRUE);


	printf("\n\t\t\t\nFINALIZO EL PROGRAMA");
	return 0;
}
