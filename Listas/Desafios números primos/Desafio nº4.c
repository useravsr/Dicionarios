#include <stdio.h>
int main(){

        int casas,graos,i;

        printf ("Insira a quantidade de graos na primeira casa:");
        scanf("%d", &graos);


        for ( casas = 1 ; casas != 32 ; casas++){
        
            graos=graos*2;
            
        }

        printf("A quantidade que deve ser paga em graos e %d.", graos);

}