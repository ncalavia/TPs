#include <stdlib.h>
#include <ctype.h>
#include <string.h>


int suma2float(float num1,float num2)
{
	float resultado=0;
	resultado=num1+num2;
	return resultado;
}
int resta2float(float num1,float num2)
{
	float resultado=0;
	resultado=num1-num2;
	return resultado;
}
int division2float(float num1,float num2) // devuelve -1 algun numero es 0
{
	int retorno = -1;
	float resultado;
	if(num1 != 0 && num2 != 0)
	{
		resultado=num1/num2;
		retorno = resultado;
	}
	return retorno;
}
int multiplic2float(float num1,float num2)
{
	float resultado=0;
	resultado=num1*num2;
	return resultado;
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
