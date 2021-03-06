/*
 * Validaciones.c
 *
 *  Created on: 1 abr. 2022
 *      Author: Alejandro Alberto Martín Rozas
 *      Biblioteca de validaciones.
 *      Versión 0.1 del 01 de abril de 2022
 */
#include "menu.h"
#include "input.h"
/// @fn int menu_menu(char[], char[], char[], int, int)
/// @brief Print a menu with options.
///
/// @param menuTitle Array with the menu title.
/// @param menuText Array with the menu options.
/// @param errorMessages
/// @param retries
/// @param numberOptions
/// @return
int menu_menu(char menuTitle[], char menuText[], char errorMessages[],int retries, int numberOptions)
{
	int rtn = -1;
	int option;

	if(menuTitle != NULL
			&& menuText != NULL
			&& retries > 0
			&& numberOptions > 0)
	{
		printf("\n\t\t\t%s", menuTitle);
		printf("%s", menuText);
		input_getInt("INGRESE UNA OPCIÓN:", retries, 1, numberOptions, errorMessages, &option);
		rtn=option;
	}
	return rtn;
}

int menu_confirm(char message[], char errorMessage[])
{
	int rtn = -1;
	char buffer;
	int rtnGetChar;

	if(message != NULL && errorMessage != NULL)
	{
		__fpurge(stdin);
		rtnGetChar=input_getChar(message, 3, 'N', 'S', errorMessage, &buffer);
		if (rtnGetChar==0)
		{
			if(buffer == 'S')
			{
				rtn = 1;
			}
			else
			{
				if (buffer == 'N')
				{
					rtn = 0;
				}
			}
		}

	}
	return rtn;
}


