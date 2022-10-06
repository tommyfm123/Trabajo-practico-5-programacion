/*  Ingresar un número expresado en el sistema binario, convertirlo al sistema decimal.
Presentar ambos números en el centro de la pantalla. */
#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(){
    int N, C = 0, I = 0, M = 0, H;
        printf("ingresar un numero binario: ");
            scanf("%d", &N);
        H = N;

    do{
        M = N % 10;
        N = N / 10;
        I = I + (M*pow(2,C));
        C = C + 1;
    }while (N > 1);

    I = I + (N * pow(2, C));

    printf("numero expresado en sistema binario: %d \n", H);
    printf("numero expresado en sistema decimal: %d", I);
    
return 0;
}