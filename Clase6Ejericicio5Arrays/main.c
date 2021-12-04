#include <stdio.h>
#include <stdlib.h>
/**5)	Almacenar 300 números en un vector, imprimir cuantos son ceros, cuantos son negativos y
cuantos positivos. Imprimir además la suma de los negativos y la suma de los positivos */

#define TAMANIO 300
int main()
{
    printf("-----------------Ejercicio 5----------------------\n");

    /**Defino el vector de numero enteros */
    int vector[TAMANIO] ;

    /**Seteamos la semilla tomando la hora del sistema para que los numeros aleatorios sean diferentes en cada
    ejecucion de la app*/
    srand(time(NULL));

    /**Cargamos de datos aleatorio el vector */
    for(int i = 0 ; i < TAMANIO ; i++)
    {

//        numeros aleatorios entre 0 y 50   =>  rand() % 51
//        numeros aleatorios entre 1 y 100   =>  ( 1 + rand() ) % (101 - 1) ;
//        numeros aleatorios entre 250 y 420   =>  ( 250 + rand() ) % (420 - 250) ;
//        de la forma general es :
//        variable = limite_inferior + rand() % (limite_superior - limite_inferior);
//
        vector[i] = rand() % 11 ; //creamos numeros aleatorios

        if(i >= TAMANIO / 2 )
        {
            vector[i] = vector[i]  * -1 ;
        }
        printf("vector[%i] = %i \n ",i, vector[i]);

    }

    int cantidadPositivos = 0, cantidadNegativos = 0, cantidadNeutros = 0 ;
    int sumatoriaPositivos = 0, sumatoriaNegativos = 0 ;

    //recorremos el vector analizando los datos previamente cargados
    for (int i = 0 ;  i < TAMANIO ; i++)
    {
        if(vector[i] > 0)
        {
            cantidadPositivos ++;
            sumatoriaPositivos += vector[i] ;

        }
        else if(vector[i] < 0)
        {
            cantidadNegativos ++ ;
            sumatoriaNegativos  += vector[i];
        }
        else
        {
            cantidadNeutros ++;
        }
    }

    printf("De los datos que tiene el vector exiten : \n");

    printf("Neutros : %i\n" , cantidadNeutros);

    printf("Positivos : %i\n" , cantidadPositivos);
    printf("Suma de los Numeros Positivos : %i\n" , sumatoriaPositivos);

    printf("Negativos : %i\n" , cantidadNegativos);
    printf("Suma de los Numeros Negativos : %i\n" , sumatoriaNegativos);

    return 0;
}
