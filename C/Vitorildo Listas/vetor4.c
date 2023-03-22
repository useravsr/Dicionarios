#include<stdio.h>
#include<string.h>
int main(){

    int linhas;
    int contadorPar = 0;
    int contadorImpar = 0;
    
    
    scanf("%d", &linhas);

    int numeros[linhas-1];
    int numerosPar[linhas-1];
    int numerosImpar[linhas-1];

    for(int i = 0; i<linhas; i++){

        scanf("%d", &numeros[i]);

    }
     

    for(int i = 0; i<linhas; i++){
       
        for(int j = i; j<linhas; j++){

            if(numeros[j] % 2 == 0){

            numerosPar[contadorPar] = j;
            contadorPar++;
            break;


            }else{

                numerosImpar[contadorImpar] = j;
                contadorImpar++;
                break;

            }


        }
        

    }
    
    for(int i = 0; i<contadorPar; i++){

        printf("%d ", numerosPar[i]);

    }
    
    printf("\n");

    for(int i = 0; i<contadorImpar; i++){

        printf("%d ", numerosImpar[i]);

    }

    return 0;

}