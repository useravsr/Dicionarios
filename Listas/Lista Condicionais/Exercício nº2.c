#include <stdio.h>
#include <locale.h>
int main(){
		
		setlocale (LC_ALL, "");	
		int n1;
		float n2;
		
		printf("Insira a quantidade de maças:");
		scanf("%i", &n1);
		
		if (n1>=12){
			
			n2=n1*1;
			
		}else{
		
		 n2=n1*1.30;

		}
		
		printf("Valor total = %.2f", n2);
		
	return 0;
}
