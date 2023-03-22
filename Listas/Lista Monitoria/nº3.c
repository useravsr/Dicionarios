#include <stdio.h>
#include <locale.h>
int main(){

        setlocale(LC_ALL,"");
        int mes;

        printf("Insira um número de 1 a 12:");
        scanf("%i", &mes);

        while (mes!=1 && mes!=2 && mes!=3 && mes!=4 && mes!=5 && mes!=6 && mes!=7 && mes!=8 && mes!=9 && mes!=10 && mes!=11 && mes!=12)
        {
            printf("Mês inserido não existe! Tente novamente:");
            scanf("%i", &mes);
        }
        

        switch(mes){

            case 1:
                printf("Janeiro!");
            break;

            case 2:
            printf("Fevereiro!");
            break;

            case 3:
            printf("Março!");
            break;

            case 4:
            printf("Abril!");
            break;

            case 5:
            printf("Maio!");
            break;

            case 6:
            printf("Junho!");
            break;

            case 7:
            printf("Julho!");
            break;

            case 8:
            printf("Agosto!");
            break;

            case 9:
            printf("Setembro!");
            break;

            case 10:
            printf("Outubro!");
            break;

            case 11:
            printf("Novembro!");
            break;

            case 12:
            printf("Dezembro!");
            break;

        }

    return 0;
}