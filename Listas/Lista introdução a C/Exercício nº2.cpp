#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	
	float n1, terca;
	
	printf("Insira um n�mero:");
	scanf("%f", &n1);
	
		terca=n1/3;
		
	printf("A ter�a parte do n�mero inserido � %.3f", terca);
	
}
