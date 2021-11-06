#include <stdio.h>
#include <stdlib.h>
/**2) Desarrollar un algoritmo que permita ingresar un número entero
comprendido entre 1 y 10, y que muestre por pantalla si el número es par o impar.*/

int main()
{
    int num = 0 ;
    printf("Ingrese Un Numero Comprendido Entre 1 y 10\n");
    scanf("%i",&num);

    if(num >= 1 && num <= 10 )
    {
        switch(num)
        {
        case 1:
        case 3:
        case 5:
        case 7:
        case 9:
            printf("Numero Impar\n");
            break;
        case 2:
        case 4:
        case 6:
        case 8:
        case 10:
            printf("Numero Par\n");
            break;
        }
    }
    else
    {
        printf("Numero ingresado incorrecto!\n");
    }
    return 0;
}
