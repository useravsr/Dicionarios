#include <stdio.h>
#include <locale.h>
int main(){

        setlocale(LC_ALL,"");
        int n1, i, total=0;

        for (i=1 ; i<=10; i++){

            printf("Insira um número:");
            scanf("%i", &n1);

                if(n1<=40){

                    total=total+n1;

                }

        }

        printf("A soma de todos os números inseridos foi %i.", total);

    return 0;
}