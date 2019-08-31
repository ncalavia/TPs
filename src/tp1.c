/*
 ============================================================================
 Name        : tp1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio_ext.h>
#include <stdlib.h>
#include <ctype.h>
#define RETORNO_EXITOSO 0
#define RETORNO_ INVALIDO -1

int ingresoNumeros(int *num1,int *num2);
int esNumero(int prenumero);

int main(void)
{
	int num1;
	int num2;

	ingresoNumeros(&num1, &num2);
	return 0;
}

int ingresoNumeros(int *numero1, int *numero2)
{
	int prenumero1;
	int prenumero2;

	do
	{
		printf("Ingrese el 1er numero");
		__fpurge(stdin);
	} while (scanf("%d", &prenumero1) != 1);

	do
	{
		printf("Ingrese el 2do numero");
		__fpurge(stdin);
	} while (scanf("%d", &prenumero2) != 1);
	return 0;
}

