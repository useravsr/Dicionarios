#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include "forca.h" //Header files

    char palavraSecreta[20];
    char chutes[26];
    int tentativas = 0;

void escolhaPalavra(){ // Função para ler um arquivo contendo todas as palavras do jogo.

    FILE* f;

   f = fopen("palavras.txt", "r");
   if(f == 0){

        printf("Desculpe, banco de dados nao disponivel!\n\n");
        exit(1);

   }

    int quantidadePalavras;
    fscanf(f, "%d", &quantidadePalavras);
    
    srand(time(NULL));
    int randomico = rand() % quantidadePalavras;

    for(int i = 0; i <= randomico; i++){

        fscanf(f, "%s", palavraSecreta);

    }

   fclose(f);

}

void cabecalho(){

    printf("******************************************\n");
    printf("*    Bem vindo ao nosso jogo de forca    *\n");
    printf("******************************************\n\n");

}

int procurarLetra(int *acertou){

    for( unsigned int i=0; i < strlen(palavraSecreta); i++){

        int achou = 0;

        for(int j=0; j < tentativas; j++){

            if(chutes[j] == palavraSecreta[i]){
                achou = 1;
                break;
            }
        }

        if (achou){
            printf("%c ", palavraSecreta[i]);
            (*acertou)++;
        }else printf("_ "); 

    }

    return 0;

}

int letraExiste(char letra) {

    for(unsigned int j = 0; j < strlen(palavraSecreta); j++) {
        if(letra == palavraSecreta[j]) {
            return 1;
        }
    }

    return 0;
}

int mensagemLetra(int letraExiste){

    int tenta = tentativas;
    tenta--;

    if (letraExiste){

            printf("Voce acertou, a palavra secreta tem %c!\n\n", chutes[tenta]);

        }else{

            printf("Voce errou, a palavra secreta nao tem %c!\n\n", chutes[tenta]);

        }

    return 0;

}

int chuta(int *existeLetra){

    char chute;

        printf("\n\nInsira uma letra (EM MAIUSCULO): ");
        scanf("%c", &chute);
        fflush(stdin);
        system("cls");

        *existeLetra = letraExiste(chute);

        chutes[tentativas] = chute;
        tentativas++;

    return 0;
            
}

int ganhar(int *acertou, unsigned int acertouValor){
    
    (*acertou)=0;

    if(acertouValor==strlen(palavraSecreta)){

        return 1;

    }else return 0;

}

int boneco(int erros,int *enforcou){

    
    printf("  _______       \n");
    printf(" |/      |      \n");
    printf(" |      %c%c%c  \n", (erros>=1?'(':' '), (erros>=1?'_':' '), (erros>=1?')':' '));
    printf(" |      %c%c%c  \n", (erros>=3?'/':' '), (erros>=2?'|':' '), (erros>=3?'\\': ' '));
    printf(" |       %c     \n", (erros>=2?'|':' '));
    printf(" |      %c %c   \n", (erros>=4?'/':' '), (erros>=4?'\\':' '));
    printf(" |              \n");
    printf("_|___           \n");
    printf("\n\n");

    if(erros == 5) *enforcou = 1;

    return 0;
}

int enforcar(int *enforcou){

    unsigned int errou = 0;

    --tentativas;

    for(unsigned int i=0; i < strlen(palavraSecreta); i++){
 
        if(chutes[tentativas] != palavraSecreta[i]){
            errou++;
        }
        
        if (errou==strlen(palavraSecreta)){
            (*enforcou)++;
        }
 
    }

    tentativas++;

    return 0;

}

void escreverTXT(){

    system("cls");
    cabecalho();

        int escrever;
        
            printf("Voce deseja adicionar mais uma palavra em nosso jogo?\n1 - Sim\n2 - Nao\n>");
            scanf("%d", &escrever);

        if(escrever == 1){

        //Primeira parte para ler o número de palavras posicionado na primeira linha e efetuar a atualização.

            FILE* f = fopen("palavras.txt", "r+");
            int quantidade;
            
                fscanf(f, "%d", &quantidade);
                quantidade++;

                fseek(f, 0, SEEK_SET); //Função para selecionar a primeira possição do arquivo de texto.
                fprintf(f, "%d", quantidade);

        //Segunda parte para ler a nova palavra e escrever na ultima posição.
            
            char novaPalavra[20];

                printf("\nDigite sua nova palavra(EM MAIUSCULO E SEM ACENTOS): ");
                scanf("%s", novaPalavra);

                fseek(f, 0, SEEK_END); //Função para selecionar a ultima possição do arquivo de texto.
                fprintf(f, "%s\n", novaPalavra);

            fclose(f);
            
        }

        printf("\n\nObrigado por participar do nosso jogo!\n\n");
    
        system("pause");

}

void trofeu(){

    system("cls");
    cabecalho();
    printf("Parabens, voce ganhou!\n\n");
    printf("       ___________      \n");
    printf("      '._==_==_=_.'     \n");
    printf("     .-\\:      /-.     \n");
    printf("     | (|:.     |) |    \n");
    printf("      '-|:.     |-'     \n");
    printf("       \\::.    /       \n");
    printf("         '::. .'        \n");
    printf("         _.' '._        \n");
    printf("        '-------'       \n\n");
    system("pause");
    escreverTXT();

}

void morto(){

    system("cls");
    cabecalho();
    printf("Voce foi enforcado!\n\n");
    printf("      _______________        \n");
    printf("     /               \\      \n");
    printf("    /                 \\     \n");
    printf(" /\\/                   \\/\\\n");
    printf(" \\ |   XXXX     XXXX   | /  \n");
    printf("  \\|   XXXX     XXXX   |/   \n");
    printf("   |   XXX       XXX   |     \n");
    printf("   |                   |     \n");
    printf("   \\__      XXX      __/    \n");
    printf("     |\\     XXX     /|      \n");
    printf("     | |           | |       \n");
    printf("     | I I I I I I I |       \n");
    printf("     | I I I I I I I |       \n");
    printf("     \\_             _/      \n");
    printf("       \\_         _/        \n");
    printf("         \\_______/          \n\n");

    printf("A palavra secreta era %s!\n\n", palavraSecreta);
    system("pause");
    escreverTXT();

}

int main(){

    int acertou = 0;
    int enforcou = 0;
    int letrasCertas = 0;
    int existeLetra = 2;
    int erros = 0;
    
        escolhaPalavra();

        do{
            
            cabecalho();
            boneco(erros, &enforcou);
            if (enforcou) continue;
            
            if (existeLetra == 1 || existeLetra == 0) mensagemLetra(existeLetra);
            procurarLetra(&letrasCertas);
            acertou = ganhar(&letrasCertas, letrasCertas);
            if (acertou) continue;

            chuta(&existeLetra);
            enforcar(&erros);
            
        } while (!acertou && !enforcou);

        if (acertou) trofeu();
        
        if (enforcou) morto();

    return 0;

}
