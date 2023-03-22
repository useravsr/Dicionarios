#include <stdio.h>
int main(){

    signed int n1 = 0;
    signed int n2 = 1;
                
                printf("Sequencia de Fibonacci:\n");
                printf(" %i %i", n1, n2);

            for(int i = 0; i <= 100; i++){

                n1 += n2;
                n2 += n1;

                printf(" %i %i", n1, n2);

            }

}