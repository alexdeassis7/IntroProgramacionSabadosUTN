#include <stdio.h>
#include <stdlib.h>

#define CANTIDADDENUMEROS 20

/**4)	Leer 20 números e imprimir cuantos son positivos ,
 cuantos negativos y cuantos neutros */
int main()
{
    printf("Inicio de la App!\n");
    int numeroIngresado = 0, contador = 1 ;
    int cantidadPositivos = 0, cantidadNegativos = 0, cantidadNeutros = 0;

    while(contador <= CANTIDADDENUMEROS)
    {
        printf("Ingrese el numero %i!\n", contador);
        scanf("%i",&numeroIngresado);

        if(numeroIngresado > 0 )
        {
            cantidadPositivos ++ ;
        }
        else if (numeroIngresado < 0)
        {
            cantidadNegativos ++;
        }
        else
        {
            cantidadNeutros ++;
        }

        contador ++; /**incremento contador para no quedar en loop infinito*/
    }

    printf("De los 20 numeros que se ingresaron a la app\n");
    printf("POSITIVOS : %i \nNEGATIVOS : %i \nNEUTROS : %i \n" , cantidadPositivos,cantidadNegativos ,cantidadNeutros);


    printf("Fin de la App \n");

    return 0;
}
