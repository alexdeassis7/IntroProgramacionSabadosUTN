#include <stdio.h>
#include <stdlib.h>
/**8)	Simular el comportamiento de un reloj digital,
imprimiendo la hora, minutos y segundos de un día
desde las 0:0:0 hasta las 23:59:59*/

int main()
{
    /**For anidados*/
    for(int hs = 0 ; hs < 24 ; hs++) /**for encargado de incrementar las horas */
    {
        for(int min = 0 ; min < 60 ; min++) /**for encargado de incrementar las minutos */
        {
            for(int seg = 0 ; seg < 60 ; seg++) /**for encargado de incrementar las Segundos */
            {
                printf("%i:%i:%i\n", hs,min, seg);
            }
        }
    }

    return 0;
}
