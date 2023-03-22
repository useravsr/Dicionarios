#include <stdio.h>
#include <locale.h>
int main(){

        setlocale (LC_ALL,"");
        int n1, n2, n3, n4, n5,total;

        printf("Insira 3 valores inteiros diferentes:");
        scanf ("%i %i %i", &n1, &n2, &n3);

        if (n1>n2 && n1>n3){

            printf("%i ", n1);

        }else
            if (n2>n1 && n2>n3){

               printf("%i ", n2); 

            }else   
                if (n3>n1 && n3>n2){

                  printf("%i ", n3);  

                }

        if (n1>n2 && n1<n3 || n1>n3 && n1<n2){

            printf("%i ", n1);

        }else 
            if (n2>n1 && n2<n3 || n2>n3 && n2<n1){

                printf("%i ", n2);

            }else   
                if(n3>n1 && n3<n2 || n3>n2 && n3<n1){

                   printf("%i ", n3);

                }

        if (n1<n2 && n1<n3){

            printf("%i ", n1);

        }else
            if (n2<n1 && n2<n3){

               printf("%i ", n2); 

            }else   
                if (n3<n1 && n3<n2){

                  printf("%i ", n3);  

                }


    return 0;
}