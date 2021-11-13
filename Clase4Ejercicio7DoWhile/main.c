#include <stdio.h>
#include <stdlib.h>
/**7)	Calcular e imprimir la tabla de multiplicar de un número cualquiera.
Imprimir el multiplicando , el multiplicador y el producto*/
int main()
{

    printf("Inicio de la App!\n");

    int numeroIngresado = 0,contador = 0, numeroMultiplicado = 0 ;

    printf("por favor ingrese el numero de la tabla de multiplicar que desea conocer !\n");
    scanf("%i",&numeroIngresado);

    do
    {
//            5 x 0 = 5
//            5 x 1 = 10
//            5 x 2 = 15
//            5 x 3 = 20
        numeroMultiplicado = numeroIngresado * contador ;
        printf("%i X %i = %i \n", numeroIngresado, contador,numeroMultiplicado );
        contador++ ;
    }
    while(contador <= 10);
    printf("Fin de la app");
    return 0;
}
