#include <stdio.h>
#include <locale.h>
int main(){

        setlocale(LC_ALL,"");
        int n1, total=0, i, media;

        for (i=15; i<=100; i++){

            total=total+i;
            printf("%i ", i);

        }

        media=total/75;

        printf("\nA m�dia aritm�tica entre 15 e 100 � %i", media);


    return 0;
}