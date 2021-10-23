#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno = 100 , numeroDos = 100;
    printf("Condicional Simple IF!\n");

    /**Evalúa una expresion lógica (condición) , si esta es verdadera , ejecuta
    las sentencias especificadas a acontinuación de la llave "{" , si no
    no se realiza ninguna acción y continúa con el flujo del algoritmo*/

    if(numeroUno < numeroDos){
        //sentencia a ejecutar si la condicion se cumple osea que es TRUE!
        printf("el %i es menor a %i\n" , numeroUno ,numeroDos);
    }

    if(numeroDos < numeroUno){
          printf("el %i es menor a %i\n" , numeroDos ,numeroUno);
    }

    if(numeroDos == numeroUno){
          printf("el %i es igual a %i\n" , numeroDos ,numeroUno);
    }
    printf("Fin de la App");
    return 0;
}
