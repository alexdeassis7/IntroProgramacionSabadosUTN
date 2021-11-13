#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**Mostrar el mensaje Hello world 100 veces por pantalla*/
    int contador = 0,tope = 10;

    printf("inicio la estructura repetitiva while \n");
    ///estructura Repetitiva While
    while(contador < tope)
    {
        ///cuerpo del while
        printf("Hello world %d!\n",contador);
        ///incrementamos la variable contador para que no
        ///se quede el programa en LOOP INFINITO
        ///contador = contador + 1;
        ///contador += 1;
        contador ++;///operadorador autoincremental
    }

    printf("finalizo la estructura repetitiva while \n");

    return 0;
}
