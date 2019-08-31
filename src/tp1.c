/*
 ============================================================================
 Name        : tp1.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define RETORNO_EXITOSO 0
#define RETORNO_ INVALIDO -1

int ingresoNumeros(float *num1,float *num2);

int main(void) {

	float num1;
	float num2;

	ingresoNumeros(&num1, &num2);
	return EXIT_SUCCESS;
}



int ingresoNumeros(float *numero1, float *numero2)
{
	float prenumero1;
	float prenumero2;

	printf("Ingrese el 1er numero");
	scanf("%f", &prenumero1);
	printf("Ingrese el 2do numero");
	scanf("%f", &prenumero2);
	printf("primernumero %f",prenumero1);
	printf("%f",prenumero2);
	return 0;
}
