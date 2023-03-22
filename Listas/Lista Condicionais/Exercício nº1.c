#include <stdio.h>
#include <locale.h>
int main(){
		
		setlocale (LC_ALL, "");	
		int n1;
		
		printf("Insira um número:");
		scanf("%i", &n1);
		
		if (n1>=0){
			
			printf("Positivo");
			
		}else printf("Negativo");
	
	return 0;
}
