#include <stdio.h>
#include <stdlib.h>

int main()
{
    /**Mostrar el mensaje Hello world 100 veces por pantalla*/
    int contador = 0,tope = 100000;

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

    return 0;
}
