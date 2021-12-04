#include <stdio.h>
#include <stdlib.h>

/**agrego la libreria math para poder utilizar sus funciones */
#include <math.h>

/**prototypo de la funcion*/
int sumar(int numero1, int numero2);
void mostrarMensajesDeError (int cantidadDeMensajes);
void mostrarMensajeDeError ();
float calcularHipotenusa(float cateto1,float cateto2);

/**Funcion main : Algoritmo principal desde el que estaremos invocando a los demas sub algoritmos */
int main()
{

    float numero = 4;
    printf("resultado de la funcion sqrt de la libreria math %.2f \n",sqrt(numero));


    int n1 = 0, n2 = 0 ;

    printf("Subalgoritmos - tecnica divide y venceras\n");

    printf("ingrese el numero 1 \n");
    scanf("%i",&n1);

    printf("ingrese el numero 2 \n");
    scanf("%i",&n2);

    /**invocamos a la funcion sumar y le pasamos dos parametros de tipo int */
    int retornoDelaFuncion = sumar(n1, n2);

    printf("la funcion sumar nos retorno el siguiente valor : %i\n",retornoDelaFuncion);

    /**llamamos al procedimiento que muestra mensajes de error */
    printf("ingrese la cantidad de mensajes de error que quiere mostrar \n");
    int cantidadMensajesError = 0;
    scanf("%i",&cantidadMensajesError);

    mostrarMensajesDeError(cantidadMensajesError);

    /**llamamos al procedimiento mostrarMensajeDeError() que no recibe ningun parametro*/
    mostrarMensajeDeError ();

    /**Ejercicio Utilizamos el calculo de la hipotenusa */

    float c1 = 0 ,c2 = 0;
    printf("ingrese el cateto 1 \n");
    scanf("%f",&c1);

    printf("ingrese el cateto 2 \n");
    scanf("%f",&c2);

    printf("la hipotenusa del triangulo rectangulo es: %.2f ", calcularHipotenusa(c1,c2));

    return 0;
}

/**un subalgoritmo es un bloque de codigo reutilizable que resuelve un problema
puntual , existen dos tipos de subalgoritmos las funciones y los procedimientos**/


/**tipo_de_valor_de_retorno nombre_del_subalgoritmo (tipo_parametro1 nombreParamentro1, t_p_n nPN){
   cuerpo del subalgoritmo

}*/

/** FUNCION : tiene un tipo de valor de retorno distinto de void  y al menos una palabra reservada RETURN
defino sub algoritmo que suma dos numeros */
int sumar(int numero1, int numero2)
{
    printf("ingrese a la funcion Sumar\n");

    /**cuerpo de la funcion*/
    int resultado = numero1 + numero2;

    /**valor que retorna la funcion , debe ser del mismo tipo que el declarado como valor de retorno*/
    return resultado ;
}

/** Procedimiento : Tiene un valor de retorno de tipo VOID y no posee ningun RETURN*/
/** subalgoritmo de tipo procedimiento que muestra N mensajes de error */
void mostrarMensajesDeError (int cantidadDeMensajes)
{
    for(int x = 1 ; x <= cantidadDeMensajes ; x++)
    {
        printf("Error %i, intente nuevamente\n", x);
    }
}

/**Procedimiento que no recibe parametros */
void mostrarMensajeDeError ()
{
    printf("Sucedio un Error 404\n");
}


/**Ejercicio : definir e imvocar desde el algoritmo principal
una funcion que devuelve el cálculo de la hipotenusa de un triángulo rectángulo y para ellos
necesita el valor de los catetos.
La hipotenusa de un triángulo rectángulo es igual a la raiz cuadrada de la suma del cuadrado de los catetos.  */

float calcularHipotenusa(float cateto1,float cateto2)
{
    float cateto1AlCuadrado = cateto1 * cateto1;
    float cateto2AlCuadrado = cateto2 * cateto2;

    float sumaDeCatetosElevadosAlcuadrado = cateto1AlCuadrado + cateto2AlCuadrado ;
    float hipotenusa = sqrt(sumaDeCatetosElevadosAlcuadrado);

    return hipotenusa ;
}
