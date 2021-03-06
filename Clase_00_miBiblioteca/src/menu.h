/*
 * Validaciones.h
 *
 *  Created on: 1 abr. 2022
 *      Author: Alejandro Alberto Martín Rozas
 *      Biblioteca de validaciones.
 *      Versión 0.1 del 01 de abril de 2022
 */

#ifndef MENU_H_
#define MENU_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

int menu_menu(char menuTitle[], char menuText[], char errorMessages[],int retries, int numberOptions);
int menu_confirm(char message[], char errorMessage[]);

#endif /* MENU_H_ */
