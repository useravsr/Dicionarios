#include <stdio.h>
#include <locale.h>
int main(){
	
		setlocale (LC_ALL, "");
		int anoatual=2022, ano;
		
		printf("Insira seu ano de nascimento:");
		scanf ("%i", &ano);
		
		ano=anoatual-ano;
		
		if (ano>=16){
			
			printf("Pode votar!");
			
		}else printf ("Não pode votar!");
	
	
	return 0;
}
