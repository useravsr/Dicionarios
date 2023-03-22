#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	
	int n1, n2, area;
	
	printf("Insira o primeiro lado:");
	scanf ("%i", &n1);	
	printf("Insira o segundo lado:");
	scanf ("%i", &n2);
	
		area=n1*n2;
	
	printf("A area é %i", area);
	
}
