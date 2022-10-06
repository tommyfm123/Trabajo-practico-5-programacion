#include<stdio.h>

int main(){
    int N, X, PP=0, PI=0, P=0, IM=0, CP=0, CI=0, I = 1, M = 0;

      printf("ingresar N cantidad de numeros: ");
        scanf("%d", &N);

    do{
      printf("ingresar un numero: ");
        scanf("%d", &X);
          while(X == 0){
              printf("ingresaste un numero no valido. porfavor ingresa                       un numero mayor a 0 \n");
                scanf("%d", &X);
            }  M = X % 2;
                  if(M == 0){
            P = P + X;
            CP++;
      } else {
        IM = IM + X;
        CI++;
      }
      I++;
    } while (I <= N);

      PP = P / CP; 
      PI = IM / CI;

    printf("promedio par: %d \n", PP);
    printf("promedio impar: %d \n", PI);
    
  return 0;
}