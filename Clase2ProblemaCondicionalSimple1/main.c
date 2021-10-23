#include <stdio.h>
#include <stdlib.h>

/** 1) Implementar un algoritmo que calcule y muestre por pantalla el valor
final de la compra de un artículo. El algoritmo debe permitir el ingreso del
precio del artículo y la cantidad de artículos. Si el subtotal es superior a
1000, entonces se debe aplicar un descuento del 10 %.
*/
int main()
{
    //defino variabels de trabajo
    float precio = 0, descuento = 0,subtotal = 0, cantidad = 0, totalCompra =0 ;

    printf("Calculos de la Compra de un articulo!\n");

    //solicitamos datos al usuario
    printf("Ingrese el precio del articulo!\n");
    scanf("%f",&precio);

    printf("Ingrese la cantidad de articulos a comprar\n");
    scanf("%f",&cantidad);

    //procesamos la informacion
    subtotal = precio * cantidad ;

    if(subtotal > 1000)   //condicional simple
    {
        //si gasto mas de mil dolares le aplicamos un descuento del 10%
        descuento = subtotal * 0.10;
    }
    //calculamos el total a pagar
    totalCompra = subtotal - descuento;

    if(descuento > 0){
            printf("Se aplico un descuento de %.2f dolares\n", descuento);
    }

    printf("El valor final de la compra es %.2f dolares\n",totalCompra);

    return 0;
}
