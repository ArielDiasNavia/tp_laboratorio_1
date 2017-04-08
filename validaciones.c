#include <stdio.h>
#include <stdlib.h>
#include "validaciones.h"

int validarNumFactorial(float num1)
{
    int x_entero = (int) num1;

    if((num1 - x_entero)>0 && x_entero < 13 )
    {
       printf("El primer operando debe ser entero y mayor e igual a 0 y menor a 13\n");
       return 0;
    }
    else
    {
       return 1;
    }
}

int esCero(float num)
{
    if(num == 0)
    {
       printf("la division no puede realizarce porque el segundo operando es 0\n");
       return 1;
    }
    else return 0;
}

int validarOperandos(int seIngreso1, int seIngreso2 )
{
    system("cls");
    if(seIngreso1 && seIngreso2)
    {
       return 1;
    }
    else if (!seIngreso1 && seIngreso2)
    {
        printf("Debe ingresar el primer operando para poder realizar la operacion\n");
        system("pause");
        return 0;
    }else if (seIngreso1 && !seIngreso2)
    {
        printf("Debe ingresar el segundo operando para poder realizar la operacion\n");
        system("pause");
        return 0;
    }else
    {
        printf("Debe ambos operandos realizar la operacion\n");
        system("pause");
        return 0;
    }
}
