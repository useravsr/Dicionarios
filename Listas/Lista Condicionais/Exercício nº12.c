#include <stdio.h>
#include <locale.h>
int main(){

        setlocale (LC_ALL,"");
        int n1, n2, n3;

        printf("Insira 3 valores inteiros diferentes:");
        scanf ("%i %i %i", &n1, &n2, &n3);

        if (n1>n2 && n1>n3){

            printf("O maior valor é %i", n1);

        }else
            if(n2>n1 && n2>n3){

                printf("O maior valor é %i", n2);

            }else   
                if(n3>n1 && n3>n2){

                    printf("O maior valor é %i", n3);

                }
        



    return 0;
}