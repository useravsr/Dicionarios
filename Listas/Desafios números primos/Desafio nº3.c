#include <stdio.h>
#include <locale.h>
int main(){

        setlocale (LC_ALL,"");
        int n1,contador;

        contador=0;

        printf ("Digite o um n�mero:");
        scanf ("%d",&n1);

            while (n1!=0){

                printf ("Digite outro n�mero:");
                scanf("%d",&n1);

                    if (n1>=100 && n1<=200){

                     contador=contador+1;       
                
                    }

            }
        
        printf("A quantidade de n�meros digitados entre 100 e 200 foram %d", contador);
}