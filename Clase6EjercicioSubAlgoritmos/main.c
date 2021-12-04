#include <stdio.h>
#include <stdlib.h>
// 					PROBLEMA PRINCIPAL

//Calcular el promedio de tres notas de un alumno y la condicion final
//osea si aprobo o reprobo la materia "Estructuras de Datos 2"
//aprueba con promedio mayor o igual a 7 , caso contrario reprueba

//Lo descomponemos en Sub Problemas menos "complejos"
//subProblema 1 : entrada de datos (nota1 , nota2 , nota3)
//subProblema 2 : Calcular el promedio del alumnos
//subProblema 3 : Calcular la Condición del alumno
//subProblema 4 : mostrar resultados por pantalla

//Variables Globales : es una variable que puede ser utilizada dentro de todos
// los sub algoritmos  de nuestra app
float nota1 = 0, nota2 = 0, nota3= 0, promedio = 0;

//funcion principal main
int main()
{
    /**llamamos a todos los subalgoritmos para que realices su tarea*/
    solicitarDatos();
    calcularPromedio();
    validarCondicion();
    mostraResultados();

    return 0;
}

//resolvemos subProblema 1 : entrada de datos (nota1 , nota2 , nota3)
void solicitarDatos()
{
    printf("Ingrese la nota 1\n");
    scanf("%f", &nota1);
    printf("Ingrese la nota 2\n");
    scanf("%f", &nota2);
    printf("Ingrese la nota 3\n");
    scanf("%f", &nota3);
}

//resolvemos subProblema 2 : Calcular el promedio del alumnos
void calcularPromedio()
{
    promedio = (nota1 + nota2 +nota3) / 3 ;
}

//resolvemos subProblema 3 : Calcular la Condición del alumno
void validarCondicion()
{
    if(promedio >= 7)
    {
        printf("Aprobado \n");
    }
    else
    {
        printf("Desaprobado \n");
    }

}

//resolvemos subProblema 4 : mostrar resultados por pantalla
void mostraResultados()
{
    printf("las notas ingresadas del Alumno son : \n");
    printf("nota 1 : %.2f\n",nota1);
    printf("nota 2 : %.2f\n",nota2);
    printf("nota 3 : %.2f\n",nota3);
    printf("Su promedio es de : %.2f \n", promedio);
}

