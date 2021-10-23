#include <stdio.h>
#include <stdlib.h>
/**Evalua una expresion logica(condicion) , si esta es verdadera, ejecuta
las sentencias que se encuentra a continuacion de la llave "{" del if (rama verdadera) , pero
si la condicion resulta ser falsa , entonces se ejecutan las sentencias especificadas a continuacion
de la palabra reservada "else"
*/
int main()
{
    printf("Estructura condicional doble If-Else!\n");

    int numero1 = 100, numero2 = 50 ;

    if(numero1 > numero2)
    {
        //sentencias a ejecutar si la condicion resulta ser true
        printf("la codicion fue verdadera\n");
        printf("El numero 1 es mayor al numero 2\n");

    }
    else
    {
        //sentencias a ejecutar si la condicion resulta ser false
        printf("la codicion fue falsa\n");
        printf("El numero 1 NO es mayor al numero 2\n");
    }

    printf("Fin de la app\n");

    return 0;
}
