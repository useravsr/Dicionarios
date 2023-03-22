#include <stdio.h>
#include <locale.h>
int main(){

            setlocale (LC_ALL,"");
            float salariof, vendas, comissao, final;

            printf("Insira seu sal�rio fixo:");
            scanf("%f", &salariof);
            printf("Insira o valor das vendas:");
            scanf("%f", &vendas);

                if(vendas<=1500){

                    comissao=vendas * 0.03;

                }else {

                    comissao=vendas * 0.05;

                }

            final=comissao+salariof;

            printf("Seu sal�rio final � %.2f R$.", final);


    return 0;
}