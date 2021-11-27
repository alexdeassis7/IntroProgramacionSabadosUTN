#include <stdio.h>
#include <stdlib.h>
/**calcular el promedio de las notas de la materia Programacion 2 de 6 alumnos*/
int main()
{
    int tamanioVector = 6 ;
    /**Defino un array de tipo int para guardar las notas */
    float notas[tamanioVector];
    float sumaNotas = 0  , promedioNotas = 0 ;
    /** mostramos los valores por defecto que tiene nuestro vector */
//    printf("notas[0] : %i\n",notas[0]);
//    printf("notas[1] : %i\n",notas[1]);
//    printf("notas[2] : %i\n",notas[2]);
//    printf("notas[3] : %i\n",notas[3]);
//    printf("notas[4] : %i\n",notas[4]);
//    printf("notas[5] : %i\n",notas[5]);

    /**Recorremos e mostramos el vector con una estructura for antes de inicializarlo */
    for(int i = 0 ; i < tamanioVector ; i ++)
    {
        printf("notas[%i] = %f \n", i, notas[i]);

    }
    /**Recorremos e inicilizamos el vector en cero*/
//    notas[0] = 0 ;
//    notas[1] = 0 ;
//    notas[2] = 0 ;
//    notas[3] = 0 ;
//    notas[4] = 0 ;
//    notas[5] = 0 ;

    // otra forma de definir e inicializar un vector
    //int notas[] = { 0, 0, 0, 0, 0, 0, 0 };

    /**Recorremos e inicilizamos el vector en cero con una estructura for*/
    for(int indice = 0 ; indice < tamanioVector ; indice ++)
    {
        notas[indice] = 0 ;
    }
    printf("se inicializo todo el vector! \n");


    /**Recorremos e mostramos el vector con una estructura for despues de su inicializacion*/
    for(int i = 0 ; i < tamanioVector ; i ++)
    {
        printf("notas[%i] = %f \n", i, notas[i]);

    }

    /**solicitamos las 6 notas al usuario */
    for(int i = 0 ; i < tamanioVector ; i ++){
         printf("ingrese la nota %i \n", i);
         scanf("%f",&notas[i]); /**capturamos y guardamos la nota*/
         /**sumamos las notas a medida que se van ingresando*/
         sumaNotas += notas[i];
    }

    /**calculamos el promedio de las notas */
    promedioNotas = sumaNotas / tamanioVector;

     /**mostramos las 6 notas ingresada al usuario */
     for(int i = 0 ; i < tamanioVector ; i ++)
    {
        printf("notas[%i] = %.2f \n", i, notas[i]);

    }

    /**mostramos el promedio de las notas */

     printf("el promedio de las %i notas es : %.2f \n", tamanioVector , promedioNotas);



    /** mostramos los valores por defecto que tiene nuestro vector */
//    printf("*-*-*VECTOR INICIALIZADO-*-*-\n");
//
//    printf("notas[0] : %i\n",notas[0]);
//    printf("notas[1] : %i\n",notas[1]);
//    printf("notas[2] : %i\n",notas[2]);
//    printf("notas[3] : %i\n",notas[3]);
//    printf("notas[4] : %i\n",notas[4]);
//    printf("notas[5] : %i\n",notas[5]);







    return 0;
}
