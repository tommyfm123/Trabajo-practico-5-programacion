/* 
Ingresar N números, presentar por pantalla el promedio de ellos

P= promedio
A = acumulador
C = contador
X = cantidad de numeros 
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  int A=0 , P=0 , C=1 , X , N=0;
    printf("ingrese N cantidad de numeros: ");
    scanf("%d", &N);
      
  while(C <= N){
    printf("ingrese un numero: ");
      scanf("%d", &X);
      A = A + X;
      C = C + 1;
  }
  P = A / N ;
  printf("%d", P);
  return 0;
}