#include<stdio.h>
#include<string.h>
int main(){

    int linhas;
   
    scanf("%d", &linhas);

    int numeros[linhas-1];

    for(int i = 0; i<linhas; i++){

        scanf("%d", &numeros[i]);

    }

    int numeroX;

    scanf("%d", &numeroX);

    for(int i = 0; i<linhas; i++){

        if(numeros[i] == numeroX){

            printf("pertence\n");
            break;

        }else if(i == linhas-1){

            printf("nao pertence\n");
            break;

        }

    }



    return 0;
}