#include <stdio.h>
#include <stdlib.h>
/**4) Calcular la utilidad que un trabajador recibe en el reparto anual de utilidades si este se le asigna como un porcentaje
 de su salario mensual que depende de su antigüedad en la  empresa de acuerdo con la siguiente tabla.

    Tiempo	                         Utilidad
Menos de 1 año	                    5% del salario
1 año o más y menos de 2 años 	    7% del salario
2 años o más y menos de 5 años	    10% del salario
5 años o más y menos de 10 años	    15% del salario
10 años o mas 	                    20% del salario
*/

int main()
{
    //Defino mis variables de trabajo
    float antiguedad = 0, salarioMesual = 0, utilidad = 0;


    printf("Inicio de la App!\n");
    //solicitamos los datos al usuario
    printf("Ingrese por favor su antiguedad en la empresa por ej: 1 = un anio , 0.5 = 6 meses \n");
    scanf("%f",&antiguedad);

    printf("Ingrese por favor su salario mensual en la empresa\n");
    scanf("%f",&salarioMesual);

    /**If Else Anidados*/
    if(antiguedad < 1)
    {
//            Menos de 1 año	                    5% del salario
        utilidad = salarioMesual * 0.05;
    }
    else if(antiguedad >= 1 && antiguedad < 2)
    {
//        1 año o más y menos de 2 años 	    7% del salario
        utilidad = salarioMesual * 0.07;
    }
    else if(antiguedad >= 2 && antiguedad < 5)
    {
//        2 años o más y menos de 5 años	    10% del salario
        utilidad = salarioMesual * 0.10;
    }
    else if(antiguedad >= 5 && antiguedad < 10)
    {
//        5 años o más y menos de 10 años	    15% del salario
        utilidad = salarioMesual * 0.15;
    }
    else
    {
//        10 años o mas 	                    20% del salario
        utilidad = salarioMesual * 0.20;
    }

    printf("Su utilidad sera de %.2f dolares\n" ,utilidad );
    printf("Fin de la App!\n");


    return 0;
}
