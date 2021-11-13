#include <stdio.h>
#include <stdlib.h>
/**defino una constante , valor que no se modificara a lo largo de la ejecucion de la app
La directiva "define" indica al preprocesador que debe sustituir en el codigo fuente del programa todas
las ocurrencias del "nombre_de_la_constante" por la "secuencia_de_caracteres" antes de la compilacion

#define "nombre_de_la_constante" "secuencia_de_caracteres"

*/
#define CANTIDADNOTAS 7

/***1)	Calcular el promedio de un alumno que tiene 7 calificaciones
 en la materia de Diseño Estructurado de Algoritmos.*/
int main()
{
    /**esta seria otra manera alternatica de crear una constante pero que utyilizara espacion en memoria
    const int CANTIDADNOTAS = 7 ;
    */
    /**defino mis variable de trabajo */
    float calificacion = 0, sumatoria = 0,promedio = 0 ;
    int contador = 1 ;

   // const int CANTIDADNOTAS = 7 ;
   //  CANTIDADNOTAS = 5; NO PERMITIDO YA QUE ES UN VALOR INMUTABLE

    printf("Calculo del promedio de un alumno!\n");

    while(contador <= CANTIDADNOTAS)
    {
        printf("Ingrese la nota %i del alumno en la materia de Disenio Estructurado de Algoritmos!\n",contador);
        scanf("%f",&calificacion);
        sumatoria += calificacion;
        /**sumatoria = sumatoria + calificacion;*/
        contador++; /**incremento contador para no quedar en un loop infinito */
    }

    /**calculamos el promedio de las 7 notas*/
    promedio = sumatoria / CANTIDADNOTAS;

    printf("El promedio del alumno es %f \n", promedio);

    printf("Fin del promedio de un alumno!\n");

    return 0;
}
