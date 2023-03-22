#include<stdio.h>
int main(){

    int entrada;
    int media = 0;

    scanf("%d", &entrada);

    int elementos[entrada-1];

    for(int i = 0; i<entrada ; i++){

        scanf("%d", &elementos[i]);

    }

    for(int i = 0; i<entrada ; i++){

        media += elementos[i];

    }
    
        media = media/entrada;

    for(int i = 0; i<entrada ; i++){

        if(elementos[i] > media){

            printf("%d ", elementos[i]);

        }

    }


    return 0;
}