#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
int main(){

            setlocale (LC_ALL, "");
            char nome[50];

            printf("Insira um nome: ");           
            fgets(nome,50,stdin);
            printf ("Seu nome é %s", nome);

}