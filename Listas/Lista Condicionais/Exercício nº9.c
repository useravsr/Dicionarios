#include <stdio.h>
#include <locale.h>
int main(){

            setlocale (LC_ALL,"");
            float cliente, saldo, debito, credito, saldof;

            printf("Insira o n�mero da sua conta:");
            scanf("%f", &cliente);
            printf("Insira o seu saldo:");
            scanf("%f", &saldo);
            printf("Insira seu debito:");
            scanf("%f", &debito);
            printf("Insira seu credito:");
            scanf("%f", &credito);

            saldof = saldo - debito + credito;

            if(saldof>=0){

                printf("\nSaldo: %.2f R$.\n", saldof);
                printf("Saldo positivo!");

            }else {
                
                printf("\nSaldo: %.2f R$.\n", saldof);
                printf("Saldo negativo!\n");

            }





    return 0;
}