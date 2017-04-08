#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"
#include "validaciones.h"


int main()
{
    char seguir='s';
    int opcion=0;
    int seIngreso1erOperando = 0, seIngreso2doOperando = 0;
    float primerOperando=0 , segundoOperando=0;


    while(seguir=='s')
    {
        system("cls");
        printf("1- Ingresar 1er operando (A=%.2f)\n",primerOperando);
        printf("2- Ingresar 2do operando (B=%.2f)\n", segundoOperando);
        printf("3- Calcular la suma (%.2f + %.2f)\n",primerOperando,segundoOperando);
        printf("4- Calcular la resta (%.2f - %.2f)\n",primerOperando,segundoOperando);
        printf("5- Calcular la division (%.2f / %.2f)\n",primerOperando,segundoOperando);
        printf("6- Calcular la multiplicacion (%.2f * %.2f)\n",primerOperando,segundoOperando);
        printf("7- Calcular el factorial (%.2f!)\n",primerOperando);
        printf("8- Calcular todas las operaciones\n");
        printf("9- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                primerOperando= IngresarOperandos(1);
                seIngreso1erOperando = 1;

                break;

            case 2:
                segundoOperando=IngresarOperandos(2);
                seIngreso2doOperando = 1;

                break;
            case 3:
                if(validarOperandos(seIngreso1erOperando,seIngreso2doOperando))
                    mostrarResultadoOP(primerOperando,segundoOperando,sumar(primerOperando, segundoOperando),'+',1,1);
                break;
            case 4:
                if(validarOperandos(seIngreso1erOperando,seIngreso2doOperando))
                    mostrarResultadoOP(primerOperando,segundoOperando,restar(primerOperando, segundoOperando),'-',1,1);
                break;
            case 5:
                if (validarOperandos(seIngreso1erOperando,seIngreso2doOperando))
                {
                    if(!esCero(segundoOperando))
                        mostrarResultadoOP(primerOperando,segundoOperando,dividir(primerOperando, segundoOperando),'/',1,0);
                    else system("pause");
                }

                break;
            case 6:
                if(validarOperandos(seIngreso1erOperando,seIngreso2doOperando))
                    mostrarResultadoOP(primerOperando,segundoOperando,multiplicar(primerOperando, segundoOperando),'*',1,1);
                break;
            case 7:
                 system("cls");
                 if (validarOperandos(seIngreso1erOperando,1))// solo se valida el primer operando
                 {
                     if(validarNumFactorial(primerOperando))
                        mostrarResultadoFact(primerOperando,factorial(primerOperando),1,0);
                     else system("pause");
                 }


                break;
            case 8:
                system("cls");
                if (validarOperandos(seIngreso1erOperando,seIngreso2doOperando))
                {
                    mostrarResultadoOP(primerOperando,segundoOperando,sumar(primerOperando, segundoOperando),'+',0,0);
                    mostrarResultadoOP(primerOperando,segundoOperando,restar(primerOperando, segundoOperando),'-',0,0);

                    if (!esCero(segundoOperando))
                        mostrarResultadoOP(primerOperando,segundoOperando,dividir(primerOperando, segundoOperando),'/',0,0);

                    mostrarResultadoOP(primerOperando,segundoOperando,multiplicar(primerOperando, segundoOperando),'*',0,0);

                    if (validarNumFactorial(primerOperando))
                        mostrarResultadoFact(primerOperando,factorial(primerOperando),0,1);
                    else
                    {
                        printf("\n");
                        system("pause");
                    }

                }


                break;
            case 9:
                seguir = 'n';
                break;
            default:
                system("cls");
                printf(" %d es una opcion no valida, Reingrese Opcion \n\n",opcion);
                system("pause");
        }
    }
    return 0;
}
