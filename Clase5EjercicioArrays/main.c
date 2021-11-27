#include <stdio.h>
#include <stdlib.h>
/**2)	Llenar dos vectores A y B de 45 elementos cada uno, sumar el elemento uno del vector A
con el elemento uno del vector B y así sucesivamente hasta 45, almacenar el resultado en un vector C,
 e imprimir el vector resultante por pantalla.*/

#define TAMANIO 45
int main()
{
    printf("Inicio del App!\n");

    /**defino 3 vectores de tipo int*/
    int vectorA[TAMANIO];
    int vectorB[TAMANIO];
    int vectorC[TAMANIO];

    /**Seteamos la semilla o seed tomando la hora del sistema para que lo numeros aleatorios sean diferentes en cada ejecucion de la app */
    srand(time(NULL));



    //cargamos el vector A y B , luego los sumamos y mostramos por pantalla
    for(int i = 0 ; i < TAMANIO ; i ++)
    {
        //cargo el vectorA de manera aleatoria con la funcion rand()
        vectorA[i] = rand() % 11 + 20 ; // este numero esta´entre 20 y 30
        //rand() % (N -M+1) + M ; // este numero estaentre M y N

        //cargo el vectorB de manera aleatoria con la funcion rand()
        vectorB[i] = rand() % 11 + 20 ; // este numero esta´entre 20 y 30

        //sumamos el valor de vectorA mas el valor de vectorB y lo guardamos en vectorC
        vectorC[i] = vectorA[i] + vectorB[i] ;

        //mostramos los valores que tiene cargado el vector
        //printf("VectorA[%i] = %i + VectorB[%i] = %i = VectorC[%i] = %i \n",i, vectorA[i], i,vectorB[i], i,vectorC[i] );
        printf("%i + %i = %i \n", vectorA[i],vectorB[i],vectorC[i] );

    }

    printf("Fin del App!\n");

    return 0;
}
