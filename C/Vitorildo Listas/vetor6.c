#include<stdio.h>
#include<string.h>
int main(){

    int linhas;
   
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

        total[i]= numeros1[i]+numeros2[i];
        printf("%d ", total[i]);

    }
    
    printf("\n");

    return 0;
}