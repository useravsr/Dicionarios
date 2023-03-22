#include <stdio.h>
int main (){

       /*
            Modos de leitura de um arquivo:

                w - Escrita
                r - Leitura
                a - Anexar
                r+ - Leitura e escrita
                w+ -> leitura e escrita (apaga o conteúdo caso o arquivo exista)
                a+ -> leitura e escrita (adiciona ao final do arquivo)
       */ 

// Variaveis para ler o arquivo Txt

        FILE* fileLer;
        int num;
        char a[20];
        char b[20];
        char c[20];
        fileLer = fopen("FILE.txt","r");

// Variaveis para escrener no arquivo Txt

        FILE* fileEscrever;
        char nome[100];
        int idade;
        int altura;

        char nomeleitura[100];
        int idadeLeitura;
        int alturaLeitura;

        fileEscrever = fopen("FILE.txt", "a+");

// Parte de leitura do arquivo txt

        // Função fscanf lê o que esta no arquivo e armazena em uma variavel. È lida uma linha de cada vez, se desejar ler o que está na linha 4, deverá usar o fscanf 4 vezes ou armazenar 4 vezes as variaveis.

        fscanf(fileLer, "%d %s %s %s", &num, a, b, c); 

        // fscanf(fileLer, "%s", &a);
        // fscanf(fileLer, "%s", &b);
        // fscanf(fileLer, "%s", &c);

        printf("%d\n", num);
        printf("%s\n", a);
        printf("%s\n", b);
        printf("%s\n", c);

// Parte de escrita do arquivo txt

        printf("Digite seu nome, idade e altura:\n");
        scanf("%s %d %d", nome, &idade, &altura);

        fprintf(fileEscrever, "%s %d %d\n", nome, idade, altura);

// Parte para ler o que foi escrito

        fscanf(fileLer, "%s %d %d", nomeleitura, &idadeLeitura, &alturaLeitura);
        printf("%s %d %d", nomeleitura, idadeLeitura, alturaLeitura);

        fclose(fileEscrever);
        fclose(fileLer);

}
