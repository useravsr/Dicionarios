#include <stdio.h>
#include <locale.h>
int main(){

        setlocale(LC_ALL,"");

            int n1,i,resultado=0;

        printf ("Digite um n�mero:");
        scanf ("%d",&n1);

            for (i=1; i<=n1 ; i++){

                if (n1 % i==0){
                    resultado=resultado+1;
                }
            }

             if (resultado==2){
                    printf("N�mero inserido � primo!");
                } 
                else if (resultado!=2) {

                    printf("N�mero divisivel por ");
                    for (i=1; i<=n1 ; i++){
                        
                         if (n1 % i==0){
                            printf("%d ",i);                             
                        }
                     }

                }
           
}