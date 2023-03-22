#include <stdio.h>
#include <locale.h>
int main(){
	
		setlocale (LC_ALL, "");
		int n1, n2;
		
		printf("Insira 2 valores diferentes:");
		scanf ("%i %i", &n1, &n2);
		
		if (n1>n2){
			
			printf("Maior valor inserido é %i", n1);
			
		}else printf("Maior valor inserido é %i", n2);
		
	
	return 0;
}
