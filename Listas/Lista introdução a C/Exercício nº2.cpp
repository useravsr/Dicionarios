#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	
	float n1, terca;
	
	printf("Insira um número:");
	scanf("%f", &n1);
	
		terca=n1/3;
		
	printf("A terça parte do número inserido é %.3f", terca);
	
}
