#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	
	float fixo, bonus=0.05, comissao=500, vcarros, total,carros;
	
	printf("Insira o salário fixo:");
	scanf("%f", &fixo);
	printf("Insira o valor pelos carros vendidos:");
	scanf("%f", &vcarros); 
	printf("Insira a quantidade de carros vendidos:");
	scanf("%f", &carros); 
	
		total=fixo+(vcarros*bonus);
		
	printf("\nCarros vendidos:%.2f\nComissão por cada carro:%.2f\nTotal pelos carros vendidos:%.2f\nSalario final:%.2f\n",carros,comissao, vcarros, total);
	
}
