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
#include <string.h>
#define RETORNO_EXITOSO 0
#define RETORNO_ INVALIDO -1

int ingresoNumeros(int *num1,int *num2);
int mostrarMenu(int num1ingresado,int num2ingresado);
int pedirOperacion(char *operIngresada);

int main(void){
	int num1ingresado;
	int num2ingresado;
	char operIngresada;


	ingresoNumeros( &num1ingresado, &num2ingresado);
	mostrarMenu(num1ingresado, num2ingresado);
	pedirOperacion( &operIngresada);
	printf("%c", operIngresada);

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

	*numero1 = prenumero1;
	*numero2 = prenumero2;
	return 0;
}
int mostrarMenu(int num1ingresado,int num2ingresado)
{
	printf("a) Calcular la suma (%d+%d) \n",num1ingresado,num2ingresado);
	printf("b) Calcular la resta (%d-%d) \n",num1ingresado,num2ingresado);
	printf("c) Calcular la division (%d/%d) \n",num1ingresado,num2ingresado);
	printf("d) Calcular la multiplicacion (%d*%d) \n",num1ingresado,num2ingresado);
	printf("e) Calcular factorial (%d!) \n",num1ingresado);
	return 0;
}

int pedirOperacion(char *operIngresada)
{
	char preIngreso;
	__fpurge(stdin);
	printf("ingrese opcion");
	scanf("%c", &preIngreso);
	while (preIngreso != 'a' && preIngreso != 'b' && preIngreso != 'c' && preIngreso != 'd' && preIngreso != 'e' )
	{
		__fpurge(stdin);
		printf("Ingrese nuevamente 'a' 'b' 'c' 'd' o 'e'");
		scanf("%c", &preIngreso);
	}

		*operIngresada=preIngreso;
	return 0;
}
