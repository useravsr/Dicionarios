#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	
	float real, dolar=4.80, cambio;
	
	printf("Insira o valor em real para conversão:");
	scanf("%f", &real);
	
		cambio=real/dolar;

	printf("Valor em dolar:%.2f",cambio);
	
}
