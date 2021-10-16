//incluimos librerias de codigo
#include <stdio.h>
#include <stdlib.h>
//soy un comentario de linea
/*comentario
de
bloque.*/

//atajo para guardar cambios = ctrl + s

//main es la funcion principal , el punto de inicio de ejecucion de la app
int main()
{
    //mostramos un mensaje por pantalla

    printf("Hello world!\n");
    printf("Welcome to intro programacion UTN!\n");

    //definimos variables : valores de nuestra app que cambiaran
    //durante la ejecucion del programa

    //tipoDeDato identificardor ;

//        tipos de datos numericos :
//        numeros enteros : int ,short , long
//        numeros con coma : float , double
//        para guardar caracteres : char

    //definimos e inicializamos una variable de tipo int
    int edadAlumnoUtn = 0;
    //definimos e inicializamos una variable de tipo float
    float pi = 3.1416;
    //definimos e inicializamos una variable de tipo char
    char sexo = 'F';

    //mostramos los valores de las variables por consola
    printf("El valor de la variable edadAlumnoUtn es %i\n",edadAlumnoUtn);

    printf("El valor de la variable pi es %f\n",pi);

    printf("El valor de la variable sexo es %c\n",sexo);

    printf("Fin de la app");
    return 0;
}
