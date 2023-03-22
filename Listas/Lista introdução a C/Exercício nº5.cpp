#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	
	int ma, mb, mc;
	
	printf("Insira a quantidade de chuteiras da marca A:");
	scanf("%i", &ma);
	printf("Insira a quantidade de chuteiras da marca B:");
	scanf("%i", &mb);
	printf("Insira a quantidade de chuteiras da marca C:");
	scanf("%i", &mc);
	
	printf("Marca (A)\tMarca(B)\tMarca (C)\n%i\t\t%i\t\t%i",ma,mb,mc);
	
	
}
