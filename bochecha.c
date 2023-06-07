#include <stdio.h>
#include <string.h>


struct ficha_do_aluno
{   
    char nomeAluno[5][100];
    int matricula[5];
    char sexoAluno[5][100];
    int idade[5];
    float notaA1[5];
    float notaA2[5];
    int frequencia[5];
};

struct ficha_do_aluno aluno;

int qntAlunos = 0; 

void cadastrarAluno(){

    printf("\n\n\n--------CADASTRO ALUNOS--------\n\n\n");
    printf("Nome do aluno:");
    scanf(" %[^\n]s", aluno.nomeAluno[qntAlunos]);   
   
    printf("Matricula do aluno:");
    scanf("%i", &aluno.matricula[qntAlunos]);

    printf("Sexo do aluno(MASCULINO/FEMININO/INDEFINIDO):");
    scanf(" %[^\n]s", aluno.sexoAluno[qntAlunos]);

    printf("Idade do aluno:");
    scanf("%i", &aluno.idade[qntAlunos]);
    
    printf("Nota A1:");
    scanf("%f", &aluno.notaA1[qntAlunos]);

    printf("Nota A2:");
    scanf("%f", &aluno.notaA2[qntAlunos]);

    printf("Frequencia aluno:");
    scanf("%i", &aluno.frequencia[qntAlunos]);

    qntAlunos++;
}

int main(){

    int escolha = 0;

    printf("1-Cadastrar alunos\n2-Consultar dados dos alunos\n3-Sair\n>");
    scanf("%i", &escolha);

    getchar();

    switch(escolha){

        case 1:
            cadastrarAluno();
        break;

        case 2:
           // consultarAlunos();
        break;

        case 3:
            break;

        default:
            printf("Azedou meu pcr");
        break;
    }


    return 0;
}