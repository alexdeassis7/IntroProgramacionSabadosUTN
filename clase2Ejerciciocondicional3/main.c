#include <stdio.h>
#include <stdlib.h>
/**Un obrero necesita calcular su salario semanal, el cual se obtiene de la siguiente manera:

Si trabaja 40 horas o menos se le paga $16 por cada hora.
Si trabaja más de 40 horas  se le paga $16 por cada una de las primeras 40 horas y $20 por cada hora extra.
*/
int main()
{
    int horasTrabajadas = 0, salarioSemanal = 0, horasExtras = 0;

    printf("Ingrese las horas trabajadas estas semana !\n");
    scanf("%i",&horasTrabajadas);

    if(horasTrabajadas > 40 )
    {
        horasExtras = horasTrabajadas - 40; //calculo las hs extras trabajadas
        salarioSemanal = ( horasExtras * 20 ) + ( 40 * 16 ) ;
    }
    else
    {
        salarioSemanal = horasTrabajadas * 16 ; //calculamos salario sin hs extras
    }

    printf("El salario semanal sera de %i pesos", salarioSemanal);

    return 0;
}
