#include <stdio.h>
#include <locale.h>
int main(){

        setlocale (LC_ALL,"");
        float n1;

        printf("Insira um valor:");
        scanf("%f", &n1);

        if (n1==0){

            printf("Zero!");

        }else 
            if (n1>0){

                printf("Positivo!");

            }else printf("Negativo!");
        

    return 0;
}