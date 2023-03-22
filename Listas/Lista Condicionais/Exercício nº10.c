#include <stdio.h>
#include <locale.h>
int main(){

        setlocale (LC_ALL,"");
        int atual, minima, maxima, media;

        printf("Insira a quantidade atual em estoque:");
        scanf("%i", &atual);
        printf("Insira a quantidade mínima em estoque:");
        scanf("%i", &minima);
        printf("Insira a quantidade máxima em estoque:");
        scanf("%i", &maxima);

        media = (maxima + minima)/2;

        if (atual>=media){

                printf("Não efetuar compra!");

        }else printf("Efetuar compra!");



    return 0;
}