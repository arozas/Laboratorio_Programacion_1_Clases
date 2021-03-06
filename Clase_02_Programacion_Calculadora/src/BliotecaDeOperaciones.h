/*
 * BliotecaDeOperaciones.h
 *
 *  Created on: 31 mar. 2022
 *      Author: alejandro
 *      aca van solo los includes de toda las biblioteca que vaya a usar.
 *      las definiciones de las funciones (CABECERAS)
 *      Los includes se ponen entre los #ifndef y el #endif
 *      ifndef es una instrucción del precompilador, que le dice al precompilador
 *      que las biliotecas que no estan definido, los defina por defecto, estas bicliotecas para
 *      las funciones que definan.
 *
 */

#ifndef BLIOTECADEOPERACIONES_H_
#define BLIOTECADEOPERACIONES_H_
#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>
//Prototipos//Cabecera
float sumar (float numero1, float numero2);
float restar (float numero1, float numero2);
float multiplicar (float numero1, float numero2);
float dividirInt (int numero1, int numero2);
float dividirFloat (float, float);

#endif /* BLIOTECADEOPERACIONES_H_ */

