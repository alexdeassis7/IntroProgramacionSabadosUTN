#include <stdio.h>
#include <stdlib.h>
/**5)	Leer 15 números negativos y convertirlos a positivos e
imprimir dichos números.*/

int main()
{
    printf("inicio App!\n");
    int numeroIngresado = 0, flag = 0;
    for(int i = 1 ; i <= 15 ; i++)
    {
        do
        {

            if(flag == 1)
            {
                printf("numero ingresado es invalido,intente nuevamente \n");
            }
            printf("ingrese por favor el numero negativo %i\n", i);
            scanf("%i",&numeroIngresado);
            flag = 1 ;
        }
        while(numeroIngresado >= 0);
        flag = 0 ;
        numeroIngresado = numeroIngresado * -1;
        printf("%i\n",numeroIngresado);
    }


    printf("fin App!\n");
    return 0;
}
