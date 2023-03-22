#include <stdio.h>
int main (){

        int i, x, y;

        printf ("Insira o valor de I, X e Y:");
        scanf ("%d%d%d", &i, &x, &y); 

        while (i <= 10 && x != 0 || y== 5) {

            printf("i: %d ", i);
            i = i + 1;

            printf("x: %d ", x);
            x = x + 1;
            
            printf("y: %d ", y);
            y = y + 1;
            
        }
}