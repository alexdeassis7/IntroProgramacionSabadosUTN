#include <stdio.h>
#include <stdlib.h>

/**1)	Calcular el promedio de 50 valores almacenados en un Vector. Determinar además cuantos
son mayores que el promedio, imprimir el promedio, el número de datos mayores que el promedio
y una lista de valores mayores que el promedio .*/

#define CANTIDAD 50
int main()
{


    printf("Inicio del App\n");

    /**defino mis variables de trabajo*/
    float promedio = 0, acumuladorNumeros = 0 ;
    int vector[CANTIDAD];
    int mayoresAlPromedio = 0 ;

    srand(time(NULL));/** seteamos la semilla capturando la hora del sistema operativo */

    for(int indice = 0; indice < CANTIDAD ; indice++)
    {
        vector[indice] = rand() % 11 + 10 ; //cargo el vector con numero aleatorios

        /**sumamos todos los valores del array en la variable acumuladorNumeros*/
        acumuladorNumeros += vector[indice];

        printf("vector[%i] = %i \n", indice,vector[indice] );
    }

    /**Calculamos el promedio de numeros del vector*/
    promedio = acumuladorNumeros / CANTIDAD;


    /**recorremos el vector con un for y vamos contando la cantidad de elementos que son mayores al promedio */
    for(int i = 0 ; i < CANTIDAD ; i++)
    {
        if(vector[i] > promedio)
        {
            mayoresAlPromedio++;
        }
    }

    /**me creo un vector donde guardar los datos mayores al promedio*/
    int listaMayoresAlPromedio[mayoresAlPromedio];

    /**defino indice para moverme por el array listaMayoresAlPromedio*/
    int j = 0;

    /**recorro el vector y copio los datos mayores al promedio a un segundo vector*/
    for(int x = 0 ; x < CANTIDAD ; x++)
    {
        if(vector[x] > promedio)
        {
            listaMayoresAlPromedio[j] = vector[x]; /**copio desde "vector" hacia  "listaMayoresAlPromedio"*/
            j++;
        }
    }



    printf("El Promedio : %.2f \n",promedio);
    printf("La Cantidad de Datos mayores al Promedio es : %i \n",mayoresAlPromedio);
    printf("La Lista de Datos Mayores al promedio es la siguiente :  \n");

    for(int p = 0 ; p < mayoresAlPromedio ; p++)
    {
       printf("%i -", listaMayoresAlPromedio[p]);
    }


    printf("\nFin del App\n");

    return 0;
}
