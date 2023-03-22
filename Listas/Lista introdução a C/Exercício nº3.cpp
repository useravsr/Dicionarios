#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	
	int n1;
	
	printf("Insira um Número:");
	scanf("%i", &n1);
	
	printf("Número em decimal: %i\n",n1);
	printf("Número em hexadecimal: %x\n",n1);
	printf("Número em octal: %o\n",n1);
	
	
}