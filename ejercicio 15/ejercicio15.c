/* Ingresar dos números enteros positivos N1y N2, con N1 < N2 y un número x cualquiera,
presentar por pantalla los múltiplos de x comprendidos entre N1 y N2.




*/

#include<stdio.h>
#include <stdlib.h>

int main(void){
    int N1, N2 , X, OP_1  , OP_2  , Cantidad_multiplos  ;
    
    do{
         printf ("ingresar el primer numero positivo entero: ");
            scanf("%d", &N1);

            if (N1 < 0) {
                printf("El numero ingresado es negativo, porfavor ingrese un numero positivo. \n");
            }

    }while(N1 < 0);

    do{
         printf ("ingresar el segundo numero positivo entero: ");
            scanf("%d", &N2);

            if (N2 < 0) {
                printf("El numero ingresado es negativo, porfavor ingrese un numero positivo. \n");
            }

    }while(N2 < 0);
        
    printf("ingrese un numero positivo: ");
        scanf("%d", &X);

    do
    {
        OP_1= N1 / X;
        OP_2 = N2 / X ; 
        Cantidad_multiplos = OP_2 - OP_1 + 1;
    } while (N2 < N1);
        
        printf("Los multiplos de %d comprendidos entre %d y %d, son %d", X, N1, N2, Cantidad_multiplos);
            
        return 0 ;
        } 
        
