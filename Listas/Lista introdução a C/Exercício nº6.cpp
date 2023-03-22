#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	
	int horas, minutos, segundos, total;
	
	printf("Insira a quantidade de horas:");
	scanf("%i", &horas);
	printf("Insira a quantidade de minutos:");
	scanf("%i", &minutos);
	printf("Insira a quantidade de segundos:");
	scanf("%i", &segundos);
	
		total= (horas*3600)+(minutos*60)+segundos;
		
	printf("O total em segundos é %i", total);
	
}
