#include <stdio.h>
#include <locale.h>
int main(){

        setlocale (LC_ALL,"");
        int atual, minima, maxima, media;

        printf("Insira a quantidade atual em estoque:");
        scanf("%i", &atual);
        printf("Insira a quantidade m�nima em estoque:");
        scanf("%i", &minima);
        printf("Insira a quantidade m�xima em estoque:");
        scanf("%i", &maxima);

        media = (maxima + minima)/2;

        if (atual>=media){

                printf("N�o efetuar compra!");

        }else printf("Efetuar compra!");



    return 0;
}