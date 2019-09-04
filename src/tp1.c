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
#define RETORNO_INVALIDO -1

int ingresoNumeros(float *num1,float *num2);
void mostrarMenu(float num1ingresado,float num2ingresado);
int pedirOperacion(char *operIngresada);
int realizarOperacion(char operIngresada, float num1ingresado,float num2ingresado, float *resultado);
long factorial(float num1ingresado);
void mostrarResultado(float resultado);
int pedirContinuar(char *reIngresar);

int main(void){
	float num1ingresado;
	float num2ingresado;
	char operIngresada;
	float resultado;
	int primerOperacion = 0;
	char reIngresar = 'n';

	while(primerOperacion == 0 || reIngresar == 's')
	{
		ingresoNumeros( &num1ingresado, &num2ingresado);
		mostrarMenu(num1ingresado, num2ingresado);
		pedirOperacion( &operIngresada);
		realizarOperacion( operIngresada, num1ingresado, num2ingresado, &resultado);
		mostrarResultado(resultado);
		pedirContinuar( &reIngresar);
		primerOperacion=1;
	}
	return 0;
}

int ingresoNumeros(float *numero1, float *numero2)
{
	float prenumero1;
	float prenumero2;

	do
	{
		printf("Ingrese el 1er numero");
		__fpurge(stdin);
	} while (scanf("%f", &prenumero1) != 1);

	do
	{
		printf("Ingrese el 2do numero");
		__fpurge(stdin);
	} while (scanf("%f", &prenumero2) != 1);

	*numero1 = prenumero1;
	*numero2 = prenumero2;
	return 0;
}
void mostrarMenu(float num1ingresado,float num2ingresado)
{
	printf("a) Calcular la suma (%f+%f) \n",num1ingresado,num2ingresado);
	printf("b) Calcular la resta (%f-%f) \n",num1ingresado,num2ingresado);
	printf("c) Calcular la division (%f/%f) \n",num1ingresado,num2ingresado);
	printf("d) Calcular la multiplicacion (%f*%f) \n",num1ingresado,num2ingresado);
	printf("e) Calcular factorial (%f!) \n",num1ingresado);
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
int realizarOperacion(char operIngresada, float num1ingresado,float num2ingresado, float *resultado)
{
	float preResultado=0;
	int retorno;

	switch(operIngresada)
	{
		case 'a':
			preResultado = num1ingresado+num2ingresado;
			break;
		case 'b':
			preResultado = num1ingresado-num2ingresado;
			break;
	    case 'c':
	    	preResultado = num1ingresado/num2ingresado;
	    	break;
	    case 'd':
	    	preResultado = num1ingresado*num2ingresado;
	    	break;
	    case 'e':
	    	preResultado = factorial(num1ingresado);
	    	break;
	    default:
	    	retorno = RETORNO_INVALIDO;
	    	break;
	}
	*resultado = preResultado;
	retorno=RETORNO_EXITOSO;
	return retorno;
}
long factorial(float numero)
{
	int c;
	long resultado = 1;

	for (c = 1; c <= numero; c++)
	{
		resultado = resultado * c;
	}
	return resultado;
}
void mostrarResultado(float resultado)
{
	printf("El resultado es : %f \n",resultado);
}
int pedirContinuar(char *reIngresar)
{
	char preReingreso;
	__fpurge(stdin);
	printf("Desea realizar otra operacion (n/s) :");
	scanf("%c", &preReingreso);
	*reIngresar = preReingreso;
	return 0;
}
