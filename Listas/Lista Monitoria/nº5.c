#include <stdio.h>
#include <locale.h>
int main(){

        setlocale(LC_ALL,"");
        int n1, i, total=0,total1;

        for (i=1 ; i<=10; i++){

            printf("Insira um número:");
            scanf("%i", &n1);

                if(n1>=10 && n1<=20){

                    total=total+1;

                }

        }

        total1=10-total;

        printf("Estão dentro do intervalo de 10 e 20, %i números.\n", total);
        printf("Estão fora do intervalo de 10 e 20, %i números.", total1);


    return 0;
}