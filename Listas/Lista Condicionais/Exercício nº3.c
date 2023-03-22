#include <stdio.h>
#include <locale.h>
int main(){
	
		setlocale (LC_ALL, "");
		int n1, n2, media;
		
		printf("Insira 2 notas:");
		scanf("%i %i", &n1, &n2);
		
		media = (n1+n2)/2;
		
		if (media>=6){
			
			printf("Aprovado\nMedia: %i", media);
			
		} else printf("Reprovado\nMedia: %i", media);
			
	
	return 0;
}
