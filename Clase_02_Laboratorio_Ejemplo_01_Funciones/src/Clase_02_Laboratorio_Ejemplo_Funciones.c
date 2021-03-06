/*
 ============================================================================
 Name        : Clase_02_Laboratorio_Ejemplo_Funciones.c
 Author      : Alejandro Alberto Martín Rozas
 Version     :
 Copyright   : 24/03/2022
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*Funciones:
 El objetivo de la función es la estandarización del código. Lo que se busca en una función
 es abstrerse, y ver que datos van a variar. En la buenas practicas las funciones no hacen todo.
 La idea de la función es crear funciones con funciones con pequeñas funciones adentro, trabajar de }
 forma modular, el objetivo de la función es reutilizar código.

 La idea es no repetir código, para eso se va armar nuestras biblioteas con estas funciones estandarizadas.
 La función es un bloque de código almacenado en la memoria que se va a repetir
 cada vez que lo llam.e


 Las funciones se invocan nombreFunción().

 las funciones se componen de la cabecera y desarollo del código. ambos en cada archivo

 RETORNO - NOMBRE (ARGUMENTO .... 0 - ESPACIO DE MEMORIA)
 RETORNO = TIPO DE DATO - int - float - double - char - void(no devuelve nada) - void*
 NOMBRE: Es como nosotros la identificamos. PERO SIGNIFICATIVO, que describa lo que hace.
 el nombre en camelCase.
 */

#include <stdio.h>
#include <stdlib.h>


float sumar(float numA, float numB);
/*CABECERA (se declara arriba del main cuando no esta en biblioteca)
una validación cuando se define el dato, se define por el tipo más general.
pero si vamos a usar la función para muchos procesos hay que definir bien el dato
para usar de forma performante la memoria.
*/
// TIPO DE DATO		NOMBRE		(TIPO DE ARGUMENTOS/PARAMETROS)
//------------------------------------------------------------------------------
int main(void)
{
	int num1 = 10;
	int num2 = 20;
	int resultado;

	resultado = sumar(num1,num2);

	printf("la suma es: %d", resultado);

	return 0;
}
/*DESARROLLO (se declara abajo del main cuando no esta en biblioteca)
La diferencia es que los nombres ahora no son declarativos.
 */
//--------------------------------------------------------------------------------
float sumar(float numA, float numB)
{
	float rtn;//retorno pero se pone rtn para con confundir con return

	rtn=numA+numB;

	return rtn;
}
