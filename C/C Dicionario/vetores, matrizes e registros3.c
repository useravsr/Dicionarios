#include <stdio.h>
#include <locale.h>

struct aluno{

    char nome[50];
    int idade;
    float nota;    
    
};

int main(){

    setlocale (LC_ALL, "");
    struct aluno ficha;{

    printf ("Digite o nome do aluno:");
    fgets(ficha.nome,50,stdin);
    
    printf ("Digite a idade do aluno:");
    scanf ("%d",&ficha.idade);

    printf ("Digite a nota do aluno:");
    scanf ("%f",&ficha.nota);
    }

    printf ("\nNome do aluno:%s\n", ficha.nome);
    printf ("Idade do aluno:%d\n", ficha.idade);
    printf ("Nota do aluno:%.2f\n", ficha.nota);

}