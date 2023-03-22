#include <stdio.h>
#include <locale.h>
int main(){
	
	setlocale(LC_ALL,"");
	
	int n1;
	
	printf("Insira um valor:");
	scanf("%i", &n1);
	
		if (n1>10){
			
			printf("MAIOR QUE 10!");
		
		}	else {
			
				printf("NÃO É MAIOR QUE 10!");
			
		}
	
}
