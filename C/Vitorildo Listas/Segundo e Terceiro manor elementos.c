#include<stdio.h>
#include<string.h>
int main(){

    int linhas;
    int contador = 0;
    int ordem[1];
    
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
            if(contador==linhas-2){

                ordem[0] = numeros[i];
                

            }else if(contador==linhas-3){

                ordem[1] = numeros[i];

            }
            
            contador = 0;

    }

    printf("%d\n%d\n", ordem[0], ordem[1]);

    return 0;

}

