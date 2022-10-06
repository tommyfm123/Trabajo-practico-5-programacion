/* Ingresar un número de 4 dígitos, presentar por pantalla todos sus divisores. */

#include <stdio.h>
int main(){
  
int num1,i;
do
{
    printf("Introduce un numero de 4 digitos: ");
        scanf("%d",&num1); 
} while (num1 < 999);

for(i=1;i<=num1;i++) 
{
    if(num1%i==0)    
    {
        printf("%d, es divisor de %d \n",i,num1);
    }
}
  return 0;
}
