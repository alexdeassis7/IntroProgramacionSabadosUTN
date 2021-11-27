#include <stdio.h>
#include <stdlib.h>
/***7)	Calcular e imprimir la tabla de multiplicar de un número cualquiera.
Imprimir el multiplicando , el multiplicador y el producto*/
int main()
{

    int numeroIngresado = 0 ;
    printf("que tabla desea conocer!\n");
    scanf("%i",&numeroIngresado);

    for(int x = 0 ; x <= 10 ; x++)
    {
        int producto = x * numeroIngresado ;
        printf("%i X %i = %i\n",numeroIngresado, x,producto);
    }



    return 0;
}
