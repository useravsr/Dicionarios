#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	
	float custo, valor, distribuidor=0.28, imposto=0.45;
	
	printf("Insira o valor do carro:");
	scanf("%f", &valor);
	
		custo= (valor*distribuidor)+(valor*imposto)+valor;
	
	printf("Valor final do carro %.2f", custo);
	
	
}
