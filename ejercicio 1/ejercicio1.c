//Escribir un programa que presente por pantalla los números del 1 al 20

#include <stdio.h>

int main(void) {
  int N=1;
  
  while( N <= 20){
        printf("%d\n", N);
        N = N + 1;
      }
  return 0;
  }