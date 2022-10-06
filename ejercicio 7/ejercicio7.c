// Punto 7//

/* Ingresar un número natural de 4 o más dígitos, invertir el orden de sus dígitos.
Presentar por pantalla el número ingresado y su invertido. */

#include <stdio.h>

int main(void)
{
    int num, mod, numdiv, numInv = 0;
    printf("Ingresar un numero de cuatro digitos o mas: ");
    scanf("%d", &num);
    while (num <= 999)
    {
        printf("El numero ingresado no es valido, Porfavor intente de nuevo \n ");
            system("Pause");
    }

    do
    {
        mod = num % 10;
        numdiv = num / 10;
        numInv = numInv * 10 + mod;
        num = numdiv;

    } while (num > 10);
    numInv = (numInv * 10) + num;

    printf("\n El numero invertido seria: %d \n", numInv);
    system("pause");

    return 0;
}