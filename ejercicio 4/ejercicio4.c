/* Se ingresan N valores numéricos. Se desea saber cuántos son positivos, cuántos negativos y cuantos iguales a cero. */

#include <stdio.h>

int main(void) {
  int N, X, POS = 0, NEG = 0, NEU = 0 , I=0;
  printf("ingresar N valores numericos: ");
    scanf("%d", &N );
  I = 1;
  
    while (N >= I){
    printf("ingrese un numero: ");
      scanf("%d", &X);
    
    if (X > 0){
          printf("positivo \n");
          POS = POS + 1;
      } else {
        if(X < 0){
        printf("negativo \n");
        NEG = NEG + 1;
      }else {
        if(X == 0){
            printf("Neutro \n");
            NEU = NEU + 1;
        }
      }
    }
    I = I + 1;
  }
  printf("Positivos : %d \n", POS);
  printf("Negativos : %d \n" , NEG);
  printf("Neutros : %d \n", NEU);
  
  return 0;
}