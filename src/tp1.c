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


int pedirOpcionMenu(int *opcionSeleccionada);
int mostrarMenu(float *operando1,int *flagOperando1,float *operando2,int *flagOperando2);
int opcionMenuValido(int preOpcion);
int pedirOperando1(float *operando1,int *flagOperando1);
int pedirOperando2(float *operando2,int *flagOperando2);
int ejecutarOpcion(int opcionSeleccionada,float *operando1,int *flagOperando1,float *operando2,int *flagOperando2);




int main(void)
{
	int opcionSeleccionada;
	float operando1;
	int flagOperando1=0;
	float operando2;
	int flagOperando2=0;

	do
	{
		mostrarMenu(&operando1,&flagOperando1,&operando2,&flagOperando2);
		pedirOpcionMenu( &opcionSeleccionada);
		ejecutarOpcion(opcionSeleccionada, &operando1, &flagOperando1, &operando2, &flagOperando2);
	}while(opcionSeleccionada !=5);

	return 0;
}

int mostrarMenu(float *operando1,int *flagOperando1,float *operando2,int *flagOperando2)
{
	if(*flagOperando1 != 1 && *flagOperando2 != 1)
	{
		printf("1. Ingresar 1er operando (A=x) \n");
		printf("2. Ingresar 2do operando (B=y)\n");
		printf("3. Calcular todas las operaciones \n");
		printf("4. Informar resultados \n");
		printf("5. Salir \n");
	}
	if(*flagOperando1 == 1 && *flagOperando2 != 1)
	{
		printf("1. Ingresar 1er operando (%f) \n",*operando1);
		printf("2. Ingresar 2do operando (B=y)\n");
		printf("3. Calcular todas las operaciones \n");
		printf("4. Informar resultados \n");
		printf("5. Salir \n");
	}
	if(*flagOperando1 != 1 && *flagOperando2 == 1)
	{
		printf("1. Ingresar 1er operando (A=x) \n");
		printf("2. Ingresar 2do operando (%f)\n",*operando2);
		printf("3. Calcular todas las operaciones \n");
		printf("4. Informar resultados \n");
		printf("5. Salir \n");
	}
	if(*flagOperando1 == 1 && *flagOperando2 == 1)
	{
		printf("1. Ingresar 1er operando (%f)\n",*operando1);
		printf("2. Ingresar 2do operando (%f)\n",*operando2);
		printf("3. Calcular todas las operaciones \n");
		printf("4. Informar resultados \n");
		printf("5. Salir \n");
	}

	return 0;
}
int pedirOpcionMenu(int *opcionSeleccionada)
{
	int preOpcion;
	do
	{
		__fpurge(stdin);
		printf("Ingrese opcion ");
	}while (scanf("%d", &preOpcion) != 1 || opcionMenuValido(preOpcion) != 0);
	*opcionSeleccionada = preOpcion;
	return 0;
}
int opcionMenuValido(int preOpcion)

{
	int retorno =-1;
	if(preOpcion == 1 || preOpcion == 2 || preOpcion == 3 || preOpcion == 4 || preOpcion == 5)
	{
		retorno = 0;
	}
	return retorno;
}
int pedirOperando1(float *operando1,int *flagOperando1)
{
	float preOperando1=0;
	int preflagOperando1 = *flagOperando1;
	int resultadoScanf;
	do
	{
		printf("Ingrese el 1er operando");
		//__fpurge(stdin);
		resultadoScanf=scanf("%f", &preOperando1);
	} while(resultadoScanf != 1);
	*operando1 = preOperando1;
	preflagOperando1 = 1;
	*flagOperando1 = preflagOperando1;
	return 0;
}
int pedirOperando2(float *operando2,int *flagOperando2)    // pedir - validar - cambiar valor de bandera al ingresar en operando1
{
	float preOperando2=0;
	int preflagOperando2 = *flagOperando2;
	int resultadoScanf;

	do
	{
	printf("Ingrese el 2do operando");
	//__fpurge(stdin);
	resultadoScanf=scanf("%f", &preOperando2);
	} while(resultadoScanf != 1);
	*operando2 = preOperando2;
	preflagOperando2 = 1;
	*flagOperando2 = preflagOperando2;
	return 0;
}
int ejecutarOpcion(int opcionSeleccionada,float *operando1,int *flagOperando1,float *operando2,int *flagOperando2)
{

	switch(opcionSeleccionada)
			{
				case 1:
					pedirOperando1(operando1, flagOperando1);
					break;
				case 2:
					pedirOperando2(operando2, flagOperando2);
					break;
				case 3:
					if(*flagOperando1 == 1 && *flagOperando2 == 1)
					{
						printf("Calcular todas las operaciones\n");
						printf("a) Calcular la suma (%f+%f)\n",*operando1,*operando2);
						printf("b) Calcular la resta (%f-%f)\n",*operando1,*operando2);
						printf("c) Calcular la division (%f/%f)\n",*operando1,*operando2);
						printf("d) Calcular la multiplicacion (%f*%f)\n",*operando1,*operando2);
						printf("e) Calcular el factorial (%f!) \n",*operando1);

					}
					else
						printf("Debera ingresar los operando para esta opcion \n");
					break;
				case 4:
					printf("resultado");
					break;
			}

	return 0;
}


