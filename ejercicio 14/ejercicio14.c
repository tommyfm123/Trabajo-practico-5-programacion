/* Ingresar dos números de cuatro dígitos expresados en el sistema binario, presentar por
pantalla ambos números y su suma 
Num_Bin1: primer numero binario 
Num_Bin2: segundo numero binario
Suma: suma de ambos numeros binarios
N1: variable para guardar valor del primer numero binario 
N2: variable para guardar valor del segundo numero binario 


*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    long int binario1, binario2;
    int I = 0, recordador = 0, sum[20];

    printf("Ingresa el primer numero binario: ");
    scanf("%ld", &binario1);
    printf("Ingresa el segundo numero binario: ");
    scanf("%ld", &binario2);

    while (binario1 != 0 || binario2 != 0)
    {
        sum[I++] = (binario1 % 10 + binario2 % 10 + recordador) % 2;
        recordador = (binario1 % 10 + binario2 % 10 + recordador) / 2;
        binario1 = binario1 / 10;
        binario2 = binario2 / 10;
    }

    if (recordador != 0)
        sum[I++] = recordador;

    --I;
    printf("La suma de los dos binarios:  ");
    while (I >= 0)
    {
        printf("%d", sum[I--]);
    }
    system("pause");
    return 0;
}
