#include <stdio.h>
#include <locale.h>
int main(){

        setlocale(LC_ALL,"");
        int n1, i, total=0,total1;

        for (i=1 ; i<=10; i++){

            printf("Insira um n�mero:");
            scanf("%i", &n1);

                if(n1>=10 && n1<=20){

                    total=total+1;

                }

        }

        total1=10-total;

        printf("Est�o dentro do intervalo de 10 e 20, %i n�meros.\n", total);
        printf("Est�o fora do intervalo de 10 e 20, %i n�meros.", total1);


    return 0;
}