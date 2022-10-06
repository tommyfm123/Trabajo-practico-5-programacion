/* Se ingresan N valores numéricos. Determinar el mayor y el menor de los valores ingresados.

N = cantidad de numeros a ingresar.
X = numero a ingresar.
M = mayor.
MN = menor.
I = contador
VA = variable auxiliar
*/

#include <stdio.h>

int main(void) {
  int N, X, Mayor, Menor, I=0,  H=0;

  printf("ingrese N valores numericos: \n");
    scanf("%d", &N);
  I = 1;

  while(I <= N){
    printf("ingrese un numero: \n");
    scanf("%d", &X);
    if (X > H)
    {
       H = X;
       Mayor = H;
    }else {
        H = X;
        Menor = H;
    }
    I = I + 1;
  }
  printf("el numero mayor es: %d \n", Mayor);
  printf("el numero menor es: %d \n", Menor);
  
  return 0; 
}