#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Demo For!\n");

    // for(int contador = 0 ; condicion booleana ; contador++ ){
    //mostramos los numero del 0 al 10 con for
    printf("Inicio de Estructura For\n");

    for(int contador = 0 ; contador <= 10 ; contador++ )
    {
        //cuerpo del for : instrucciones a ejecutar si la condicion es true
        printf("%i\n",contador);
    }
    printf("Fin de Estructura For\n");


    //mostramos los numeros pares del 0 al 10 con for
    printf("Inicio de Estructura For\n");
    for(int i = 0; i <= 10 ; i+=2)//i = i + 2 ;
    {
        printf("%i\n",i);
    }
    printf("Fin de Estructura For\n");

    printf("Inicio de Estructura For\n");
    //mostramos los numeros pares del 100 al 0 con for
    for(int i = 100 ; i >= 0 ; i-=2) //i = i - 2 ;
    {
        printf("%i\n",i);
    }
    printf("Fin de Estructura For\n");
    return 0;
}
