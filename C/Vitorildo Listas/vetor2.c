#include<stdio.h>
#include<string.h>
int main(){

    int linhas;
    int contador = 0;
    int memoria = 0;
    
    scanf("%d", &linhas);

    int numeros[linhas-1];

    for(int i = 0; i<linhas; i++){

        scanf("%d", &numeros[i]);

    }
     

    for(int i = 0; i<linhas; i++){
    
        for(int j = 0; j<linhas; j++){

            if(numeros[i]<numeros[j]){

                contador++;

            }

        }
            if(contador==linhas-1){

                memoria = i;
                

            }
            
            contador = 0;

    }

    printf("%d\n", memoria);

    return 0;

}