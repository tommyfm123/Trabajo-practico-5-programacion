/* Ingresar un número entero positivo, expresado en el sistema decimal, convertirlo al
sistema binario. Presentar por pantalla el número en decimal y en binario. 

C = contador
N = numero
H = para guadar el valor 
M = 


*/

#include<stdio.h>
#include<math.h>

int main(){
    int i, j, N, a[100];

    do{
         printf ("ingresar un numero positivo entero: ");
            scanf("%d", &N);

                if (N < 0) {
                printf("El numero ingresado es negativo, porfavor ingrese un numero positivo. \n");
                }

    }while(N < 0);
   
    while (N > 0){
        a[i] = N % 2;
        N /= 2;
        ++i;
    }
    for ( j = i - 1; j >= 0; --j)
    {
        printf("%d", a[j]);
    }
    return 0;
}