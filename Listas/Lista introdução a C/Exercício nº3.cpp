#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	
	int n1;
	
	printf("Insira um N�mero:");
	scanf("%i", &n1);
	
	printf("N�mero em decimal: %i\n",n1);
	printf("N�mero em hexadecimal: %x\n",n1);
	printf("N�mero em octal: %o\n",n1);
	
	
}