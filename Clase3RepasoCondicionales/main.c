/**3) Implementar un algoritmo que permita ingresar dos números enteros
por teclado. Luego, el usuario debe elegir si desea mostrar la suma o
multiplicación de ambos números*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Inicio de la App\n");

    /**Declaro mis variables de trabajo */
    int numeroUno = 0, numeroDos = 0, resultado = 0, opcionIngresada = 0;

    /**solicitamos datos al usuario */
    printf("por favor ingrese el numero 1 \n");
    scanf("%i",&numeroUno);

    printf("por favor ingrese el numero 2 \n");
    scanf("%i",&numeroDos);

    printf("Que operacion Gusta Realizar Con sus Dos numeros? \n");
    printf("1 - SUMAR \n");
    printf("2 - MULTIPLICAR \n");
    scanf("%i",&opcionIngresada);

    printf("\n");

    /**procesamos la informacion */
    /** If else anidados */
    if(opcionIngresada == 1){
        resultado = numeroUno + numeroDos ;
    }else if(opcionIngresada == 2){
        resultado = numeroUno * numeroDos ;
    }else{
        printf("La opcion %i no es valida!\n" , opcionIngresada);
    }

    if(opcionIngresada == 1 || opcionIngresada == 2){
        printf("El Resultado de la operacion elegida es : %i \n" , resultado);
    }

    printf("Fin de la App\n");
    return 0;
}
