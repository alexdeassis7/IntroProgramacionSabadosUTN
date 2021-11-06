#include <stdio.h>
#include <stdlib.h>

int main()
{

    printf("inicio App!\n");

    int opcionIngresada = 0;
    long numeroTarjeta  = 0;
    long dni  = 0;

    printf("ingrese la opcion deseada!\n");
    printf("1-Conocer el vencimiento de su factura\n");
    printf("2-Dar de baja su linea telefonica\n");
    printf("3-Pagar sus Facturas Vencidas\n");
    printf("4-Habilitar su Linea telefonica\n");
    scanf("%i",&opcionIngresada);

    switch(opcionIngresada)
    {
    /**cuerpo del switch*/
    case 1:
        /**acciones a ejecutar si el valor de la variable opcion ingresada es 1*/
        printf("El Vencimiento de su Factura es el dia 10 de Octubre de 2021\n");
        break;
    case 2:
        /**acciones a ejecutar si el valor de la variable opcion ingresada es 2*/
        printf("Su numero de linea ah sido desactivado temporalmente\n");
        break;
    case 3:
        /**acciones a ejecutar si el valor de la variable opcion ingresada es 3*/
        printf("Desea Pagar su factura con credito o debito\n");
        printf("ingrese \n1-TARJETA DEBITO\n2-TARJETA CREDITO\n");
        scanf("%i",&opcionIngresada);
        if(opcionIngresada == 1)
        {
            printf("ingrese el numero de su TARJETA DEBITO \n");
            scanf("%ld",&numeroTarjeta);
        }
        else if(opcionIngresada == 2)
        {
            printf("ingrese el numero de su TARJETA CREDITO \n");
            scanf("%ld",&numeroTarjeta);
        }
        else
        {
            printf("La opcion %i es invalida\n", opcionIngresada);
        }
        break;
    case 4:
        /**acciones a ejecutar si el valor de la variable opcion ingresada es 4*/
        printf("Ingrese su numero de DNI para poder habilitar su linea telefonica\n");
        scanf("%ld",&dni);
        break;
    default :
        printf("La opcion %i no es se corresponde con una opcion valida del menu\n", opcionIngresada);

    }

    printf("Fin App!\n");

    return 0;
}
