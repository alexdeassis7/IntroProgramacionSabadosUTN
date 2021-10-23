#include <stdio.h>
#include <stdlib.h>

/**1) Desarrollar un algoritmo que permita determinar si un número
ingresado por teclado es positivo o negativo.*/

int main()
{
    int numeroIngresado = 0 ;

    printf("Inicio de la App!\n");

    printf("Ingresar un numero entero distinto de 0 \n");
    scanf("%i",&numeroIngresado);

    //condicional doble
    if(numeroIngresado > 0)
    {
        printf("El numero Ingresado es positivo\n");
    }
    else
    {
        printf("El numero Ingresado es negativo\n");
    }


    printf("Fin  de la App!\n");

    return 0;
}
