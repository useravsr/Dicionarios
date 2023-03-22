#include <stdio.h>
#include <locale.h>
int main(){
		
		setlocale (LC_ALL, "");	
		char t1[50], t2[50];
        int n1, n2;

        printf("Insira o nome do 1º time:");
        fgets (t1, 50, stdin);
        printf("Insira o nome do 2º time:");
        fgets (t2, 50, stdin);
        printf("Insira o numero de gols marcado pelos 2 times (respectivamente):");
        scanf("%i %i", &n1, &n2);

        if(t1[strlen(t1)-1]=='\n'){

                t1[strlen(t1)-1]='\0';

            }

        if(t2[strlen(t2)-1]=='\n'){

                t2[strlen(t2)-1]='\0';
                
        }
    

        if (n1>n2){

            printf("%s foi o time vencedor!", t1);

        }else
            if(n2>n1){

                printf("%s foi o time vencedor!", t2);

            }else
                if(n1==n2){

                    printf("Empate!");

                }
	
	return 0;
}
