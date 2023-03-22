#include <stdio.h>
#include <locale.h>
int main(){

        setlocale(LC_ALL, "");
        int i,notas[20]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},j=1,alunos=0;
        float media=0;

        for (i=1; i<=20; i++){

            printf("Insira a nota do %iº aluno:", i);
            scanf("%i", &notas[i]);
            media = media+notas[i];

        }

        media=media/20;
        printf("Media da sala: %.2f\n", media);

        for ( i = 0; i < 19; i++)
        {
            if(notas[i]>=media){

                alunos++;

            }
        }

        printf("Alunos acima da media: %i", alunos);
        
        
        
    return 0;
}