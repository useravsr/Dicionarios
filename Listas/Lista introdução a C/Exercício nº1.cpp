#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	
	float n1, n2, n3, media;
	
	printf("Insira o primeiro n�mero:");
	scanf("%f", &n1);
	printf("Insira o primeiro n�mero:");
	scanf("%f", &n2);
	printf("Insira o primeiro n�mero:");
	scanf("%f", &n3);
	
		media=(n1+n2+n3)/3;
	
	printf ("A media dos n�meros inseridos %.2f", media);
		
}
