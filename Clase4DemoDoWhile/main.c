#include <stdio.h>
#include <stdlib.h>
/**Enunciado :
mostrar por pantalla los numeros pares del 0 al 100*/
int main()
{


    printf("Demo While!\n");
    /**------------------  WHILE-------------*/
    /** evalua una condicion y mientras dicha condicion sea true ejecuta
    las sentencias dentro del cuerpo del while
    - 1 vez
    - ninguna vez
    - n veces
    - infinitas veces (loop infinito)
    */

    int contador = 0 ;
    while(contador <= 100)
    {
        printf("%i\n",contador);
        contador  =  contador + 2 ;
        //sentencias dentro del cuerpo del while
    }

    /**------------------ DO WHILE-------------
    ejecuta el conjunto de sentencia que estan dentros del cuerpo del do-while
    y luego evalua la condicion para saber si debe volver a ejecutar las
    sentencias dentro del cuerpo ,
    - SI O SI se ejecutara una vez
    - n veces
    - infinitas veces (loop infinito)
    */
    printf("Demo Do While!\n");
    contador = 0 ;//reinicio el contador para reutilizar la variable
    do
    {
        //sentencias dentro del cuerpo del do while
        printf("%i\n",contador);
        contador  =  contador + 2 ;
    }
    while(contador <= 100 );

    printf("Fin de la app \n");
    return 0;
}
