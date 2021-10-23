#include <stdio.h>
#include <stdlib.h>
/**Una tienda ofrece un descuento del 15% sobre el total de la compra y
un cliente desea saber cuanto deberá pagar finalmente por su compra*/
int main()
{
    //defino mis variables de trabajo
    float descuento = 0, total_a_pagar = 0, totalCompra = 0;

    //solicito datos al usuario
    printf("Por favor ingrese el total de la compra\n");
    scanf("%f",&totalCompra);

    //procesamos la informacion
    descuento = totalCompra * 0.15;
    total_a_pagar = totalCompra - descuento;

    printf("el monto final a abonar por su compra es de %.2f pesos\n",total_a_pagar);

    printf("Inicio de la App!\n");


    return 0;
}
