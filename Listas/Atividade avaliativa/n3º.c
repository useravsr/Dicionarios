#include <stdio.h>
#include <locale.h>
int main(){
        
        setlocale(LC_ALL, "");
        int entrevista, i, menor=0;
        float salario, filhos, filhost=0, maior=0, porcentagem, salariot=0, salariom, filhosm; 

        printf("Insira a quantidade de habitantes que participaram da entrevista:");
        scanf("%i", &entrevista);

        for(i=1; i<=entrevista; i++){

            printf("Insira o sal�rio do %i� entrevistado:",i);
            scanf("%f", &salario);
            printf("Insira a quantidade de filhos %i� entrevistado:",i);
            scanf("%f", &filhos);

            salariot=salariot+salario;
            filhost=filhost+filhos;

            if(salario>maior){

                maior=salario;
            }

            if (salario<150){
               
               menor++;

            }
          system("cls");
        }

        filhosm=filhost/entrevista;
        salariom=salariot/entrevista;
        porcentagem=(menor*100)/entrevista;

        printf("A m�dia sal�rial da popula��o � %.2f\n", salariom);
        printf("A m�dia do n�mero de filhos da popula��o � %.2f\n", filhosm);
        printf("Maior s�lario dos habitantes � %.2f\n", maior);
        printf("Percentual de pessoas com o sal�rio menor que R$ 150,00 � %.0f%%\n", porcentagem);

}