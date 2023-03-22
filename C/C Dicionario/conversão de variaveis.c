#include <stdio.h>
int main(){

    int a = 3;
    int b = 2;
    double pontos;

        pontos = (double)a / (double)b; // Nesse momento os valores int estão sendo convertidos e armazenados em double. Nome dado para isso é casting.
    
    printf("%.2f", pontos);

}