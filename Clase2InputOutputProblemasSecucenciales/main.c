#include <stdio.h>
#include <stdlib.h>

int main()
{
    //defino mi variable de trabajo edad
    int edad = 0 ;
    //mostramos un mensaje por pantalla
    printf("Introduce tu edad por favor\n");
    //escaneamos un dato por teclado
    scanf("%i",&edad);

    //mostramos el dato que fue ingresado
    printf("Su edad es %i \n",edad);

    printf("Fin de la App!\n");
    return 0;
}
