#include<stdio.h>
#include<string.h>
int main(){

    int linhas;
    int contador = 0;
   
    scanf("%d", &linhas);

    int numeros1[linhas-1];
    int numeros2[linhas-1];
    int total[linhas-1];

    for(int i = 0; i<linhas; i++){

        scanf("%d", &numeros1[i]);

    }

    for(int i = 0; i<linhas; i++){

        scanf("%d", &numeros2[i]);

    }

    for(int i = 0; i<linhas; i++){

        if (numeros1[i] == numeros2[i]){

            contador++;

        }

    }
    
    if(contador == linhas){

        printf("sim\n");

    }else printf("nao\n");

    return 0;
}