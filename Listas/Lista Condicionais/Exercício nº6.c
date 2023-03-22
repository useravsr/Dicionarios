#include <stdio.h>
#include <locale.h>
int main(){
	
		setlocale (LC_ALL, "");
		int n1, n2;
		
		printf("Insira 2 valores diferentes:");
		scanf ("%i %i", &n1, &n2);
		
		if (n1>n2){
			
			printf("%i %i", n1, n2);
			
		}else printf("%i %i ", n2, n1);
		
	
	return 0;
}
