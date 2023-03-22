#include <stdio.h>
#include <locale.h>
int main(){

        setlocale (LC_ALL,"");
        int n1, n2, n3, n4, n5,total;

        printf("Insira 3 valores inteiros diferentes:");
        scanf ("%i %i %i", &n1, &n2, &n3);

        if (n1>n2 && n1>n3){

            n4=n1;

        }else
            if (n2>n1 && n2>n3){

                n4=n2;

            }else   
                if (n3>n1 && n3>n2){

                    n4=n3;

                }

        if (n1>n2 && n1<n3 || n1>n3 && n1<n2){

            n5=n1;

        }else 
            if (n2>n1 && n2<n3 || n2>n3 && n2<n1){

                n5=n2;

            }else   
                if(n3>n1 && n3<n2 || n3>n2 && n3<n1){

                    n5=n3;

                }

        total=n5+n4;

        printf("A soma dos 2 maiores valores é %i", total);


    return 0;
}