#include <stdio.h>
#include <locale.h>
int main(){
	
		setlocale (LC_ALL, "");
		int salario, extra, horas, mes, salarioextra;
		
		printf("Insira o número de horas trabalhadas no mês:");
		scanf("%i", &mes);
		printf("Insira o valor pago por hora:");
		scanf("%i", &horas);
		
		salario = mes*8; 
		
		if (mes>160){
			
			extra = mes-160;
			extra = extra * (horas+(horas*0.5));
			salarioextra = extra + salario;
			printf ("Salario = %i", salarioextra);
			
		}else printf("Salario = %i", salario);
		
	
	return 0;
}
