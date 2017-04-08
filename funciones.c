#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"

float sumar(float num1, float num2)
{
    float resultado;
    resultado = num1 +num2;

    return resultado;
}

float multiplicar(float num1, float num2)
{
    float resultado;
    resultado = num1 *num2;

    return resultado;
}

float restar(float num1, float num2)
{
    float resultado;
    resultado = num1 -num2;

    return resultado;
}

float dividir(float num1, float num2)
{
    float resultado;
    resultado = num1 / num2;

    return resultado;
}

unsigned long long factorial(int numero)
{
    int resultado;
    if(numero == 0)
    {
        return 1;
    }
    else
    {
        resultado = numero * factorial(numero - 1);
        return resultado;
    }
}

void mostrarResultadoOP(float num1, float num2,float res,char op, int limpiar, int pausar)
{
    if (limpiar)
        system("cls");

    printf("El resultado de la operacion:  %.2f %c %.2f = %.2f \n",num1,op,num2,res);

    if (pausar)
        system("pause");
}

void mostrarResultadoFact( float num1, unsigned long res,int limpiar, int pausar)
{
    if (limpiar)
        system("cls");

    printf("El resultado de la operacion:  %.0f! = %ld \n",num1,res);

    if (pausar)
        system("pause");
}

float IngresarOperandos(int operador)
{
    system("cls");
    float num;
    if(operador == 1)
        printf("1- Ingresar 1er operando (A=x) ");
    else
        printf("2- Ingresar 2do operando (B=y) ");

    scanf("%f",&num);
    return num;
}

