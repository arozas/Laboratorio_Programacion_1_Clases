/*
 * Entrada.h
 *
 *  Created on: 1 abr. 2022
 *      Author: Alejandro Alberto Martín Rozas
 *      Biblioteca de funciones de entrada.
 *      Versión 0.1 del 01 de abril de 2022
 */

#ifndef ENTRADA_H_
#define ENTRADA_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
#include "Validaciones.h"

int getInt(char mensaje[], int reintentos, int minimo, int maximo, char mensajeError[], int *pNumeroingresado);
void ingresoNumero(char pregunta[40], float* respuesta);
short menuUno(char nombreMenu[40], char opcion1[40], char opcion2[40]);
short menuDos(char nombreMenu[40], char opcion1[40], char opcion2[40], char opcion3[40]);
short menuTres(char nombreMenu[40], char opcion1[40], char opcion2[40], char opcion3[40], char opcion4[40]);
short menuCuatro(char nombreMenu[40], char opcion1[40], char opcion2[40], char opcion3[40], char opcion4[40], char opcion5[40]);


#endif /* ENTRADA_H_ */
