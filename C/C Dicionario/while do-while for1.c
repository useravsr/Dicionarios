#include <stdio.h>
int main (){

        int i;

        printf ("Insira o valor de i:");
        scanf ("%d", &i); 

        while (i <= 10){

            printf("%d ", i);
            i = i + 1;
        }      

         do {

            printf("%d ", i);
            i = i + 1;

         } while (i <= 10); 


         for ( i = i; i <= 10; i++) {

            printf("\n%d ", i);

         }
         
}