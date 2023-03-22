#include <stdio.h>
#include <string.h>
int main(){
    
    int entrada[100];
    int soma;
    int contador = 0;
    int minimamente = 0;
    int memoria[10];
    int contadorMemoria = 0;

        do{

            scanf("%d", &entrada[contador]);  

        } while(entrada[contador++] != 0);


        scanf("%d", &soma);

        for(int i = 0; i < contador; i++){

                memoria[contadorMemoria] = i;
                minimamente += entrada[i];

            if (minimamente > soma) {
                
                contadorMemoria++;
                minimamente = 0;
                
            }

        }

        for(int i = --contadorMemoria; i >= 0 ; i--){

            printf("%d\n", entrada[memoria[i]]);

        }
  
    return 0;

}