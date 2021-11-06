#include <stdio.h>
#include <stdlib.h>
/**1) Desarrollar un algoritmo que permita ingresar un número entero
comprendido entre 1 y 7, y que muestre por pantalla el día de la semana al que se corresponde.*/

int main()
{
    int numeroingresado = 0 ;
    printf("inicio App!\n");

    printf("Ingrese un numero comprendido entre 1 y 7\n");
    scanf("%d",&numeroingresado);

    switch(numeroingresado)
    {
    case 1 :
        printf("Domingo\n");
        break;
    case 2 :
        printf("Lunes\n");
        break;
    case 3 :
        printf("Martes\n");
        break;
    case 4 :
        printf("Miercoles\n");
        break;
    case 5 :
        printf("Jueves\n");
        break;
    case 6 :
        printf("Viernes\n");
        break;
    case 7 :
        printf("Sabado\n");
        break;
    default:
        printf("Numero ingresado incorrecto\n");
    }


    return 0;
}
