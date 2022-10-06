/* 
Ingresar un número natural N. Sin dividir ni multiplicar determinar si ese valor es o no
par. Presentar por pantalla el resultado.

*/

#include <stdio.h>

int main(void) {
  int Num_Nat, Resta;
  printf("ingresar un numero natural: ");
    scanf("%d", &Num_Nat);

  if (Num_Nat < 0)
  {
    printf("el numero ingresado debe ser mayor a 0.");
  }else{
      do{
          Num_Nat = Num_Nat - 2;

        }while(Num_Nat > 1);

  if(Num_Nat == 0){
    printf("El numero es par");
  }else{
    printf("El numero es impar");
  }
}  
  return 0;
}