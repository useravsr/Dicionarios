#include <stdio.h>
#include <locale.h>
int main(){

        setlocale(LC_ALL,"");
        int prato, sobremesa, bebida, total;

        printf("Escolha um prato:\n1 - Vegetariano\n2 - Peixe\n3 - Frango\n4 - Carne\n>");
        scanf("%i", &prato);
        printf("Escolha uma bebida:\n1 - Chá\n2 - Suco de laranja\n3 - Suco de melão\n4 - Refrigerante diet\n>"); 
        scanf("%i", &bebida);
        printf("Escolha uma sobremesa:\n1 - Abacaxi\n2 - Sorvete diet\n3 - Mouse diet\n4 - Mouse chocolate\n>");
        scanf("%i", &sobremesa);

        switch(prato){

            case 1:
            prato=180;
            break;

            case 2:
            prato=230;
            break;

            case 3:
            prato=250;
            break;

            case 4:
            prato=350;
            break;
        
        }

        switch(sobremesa){

            case 1:
            sobremesa=75;
            break;

            case 2:
            sobremesa=110;
            break;

            case 3:
            sobremesa=170;
            break;

            case 4:
            sobremesa=200;
            break;

        }

        switch(bebida){

            case 1:
            bebida=20;
            break;

            case 2:
            bebida=70;
            break;

            case 3:
            bebida=100;
            break;

            case 4:
            bebida=65;
            break;

        }

        total = prato + sobremesa + bebida;
        printf("O total de calorias da refeição é de %i cal.", total);


    return 0;
}