#include <stdio.h>
#include <locale.h>
int main(){
		
		setlocale (LC_ALL, "");	
		float n1, n2, total;

        printf("Insira 2 valores:");
        scanf("%f %f", &n1, &n2);

        do{

            printf("Insira um novo valor:");
            scanf("%f", &n2);

        }while (n2==0);

        total= n1/n2;

        printf("A divisão entre os dois números é %.2f", total);
	
	return 0;
}
