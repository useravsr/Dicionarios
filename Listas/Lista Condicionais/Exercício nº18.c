#include <stdio.h>
#include <locale.h>
int main(){
		
		setlocale (LC_ALL, "");	
		int idade, serviso;

        printf("Insira sua idade:");
        scanf("%i", &idade);
        printf("Insira seus anos de servi�o:");
        scanf("%i", &serviso);

        if (idade>=65){

            printf("Requerer aposentadoria");

        }else   
            if (serviso>=30){

                printf("Requerer aposentadoria");

            }else
                if (idade>=60 && serviso>= 25){

                    printf("Requerer aposentadoria");

                }else printf("N�o requerer");


	return 0;
}
