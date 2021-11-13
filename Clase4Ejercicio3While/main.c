#include <stdio.h>
#include <stdlib.h>

#define CANTIDADDENUMEROS 10
/*** 3)	Leer 10 números e imprimir solamente los positivos */

int main()
{
    printf("Inicio de la App\n");

    int numeroIngresado = 0, contador = 1 ;

    while(contador <= CANTIDADDENUMEROS)
    {
        printf("Ingrese el numero %i!\n", contador);
        scanf("%i",&numeroIngresado);

        if(numeroIngresado > 0 )
        {
            printf("el numero %i es POSITIVO !\n", numeroIngresado);
        }
       contador ++; /**incremento contador para no quedar en loop infinito*/
    }

    printf("Fin de la App");
    return 0;
}
