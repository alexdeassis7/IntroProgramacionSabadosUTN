#include <stdio.h>
#include <stdlib.h>
/**Suponga que un individuo desea invertir su capital en un banco
y desea saber cuanto dinero ganara despues de un mes si el banco paga a razon
de 2% mensual*/
int main()
{
    //defino mis variables de trabajo
    float capital = 0 , ganancia  = 0 ;

    printf("Inicio de la App!\n");

    //solicito datos al usuario
    printf("Ingrese por favor el capital que quiere invertir este mes :\n");
    scanf("%f",&capital);//guardo el dato ingresado en la variable capital

    //proceso la informacion
    ganancia = capital * 0.02;

    //mostramos los resultado por pantalla
    printf("La ganancia obtenida en un mes es de %.2f\n",ganancia);

    printf("Fin de la App!\n");

    return 0;
}
