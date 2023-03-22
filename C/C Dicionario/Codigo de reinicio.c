#include <stdio.h>
void reinicio(){

        char nome[50];
        int numero;

        fflush(stdin);
        printf ("\nInsira seu nome:");
        fgets (nome,50, stdin);
        printf ("Insira um numero:");
        scanf ("%d", &numero);
        printf ("\nNome inserido:%sNumero inserido:%d", nome, numero);

}

int main (){

        int rein;

        do{

            reinicio();
            printf("\n\nDeseja reiniciar?\nSim - 1 \nNao - 2\n");
            scanf ("%d", &rein);
            
        }while (rein==1);

        return 0;
        
}