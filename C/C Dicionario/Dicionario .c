#include <stdio.h>
#include <string.h>
#include <locale.h>
int main(){

            setlocale (LC_ALL, ""); //Codigo para acentuar as palavras. "" vazias idioma do sistema. 

            int inteiro; // Numeros inteiro 
            long inteiro2; // Numeros inteiros mais longos
            float decimal; // Numeros decimais
            double ; //Numeros decimais com mais precisão
            char texto [10]; // Caracteres, atribuições de caracteses se usa '' simples / Texto, sendo necessario alocar memoria a quantidade de caracteres "[0]" 
            void ; //Variaveis vazias

                //Variaveis:
                //%d %i = Decimal/Inteiro
                //%f = Casas decimais // Para arredondar %.(Numero de casas desejadas)f
                //%lf= Casas decimais em double
                //%s = Entrada de texto // Entrada de texto nao necessita de & // Scanf nao indicado para texto, recomendado fgets ou gets
                //%c = Caracter unico
                //%e = Vai imprimir toda a notacao cientifica 
                //%x = Números inteiros com base hexadecimal
                //%o = Números octais

                //Sequencias de escape:
                // ("\a") = To um bip padrão do sistema
                // ("\b") = Backspace
                // ("\n") = Pula no linha no console
                // ("\t") = Da um espaço no console (TAB)
                // ("\r") = Retorna ao início da linha
                // ("\0") = Caracter nulo
                // ("\v") = Tabulação vertical 

                //Função para tirar o /n do scanf --------------------------
        
                if(texto[strlen(texto)-1]=='\n'){

                texto[strlen(texto)-1]='\0';

                }

                //-------------------------------------------------------------

                printf ("Insira seu nome:");
                //puts ("Texto"); // Função puts, serve somente para imprimir texto na tela.
                scanf ("%s", texto); 
                //scanf ("%10[^\n]s", texto); // Exemplo de modelo de scanf para texto, possibilitando espacos e limitando caracteres.
                //fgets (texto,50,stdin); // Exemplo de modelo de fgets para texto.
                //minhaString[strcspn(minhaString, "\n")] = 0; Funçao para tirar o "enter" do fgets
                //gets (texto); // Exemplo de modelo de gets para texto.

                fflush(stdin); //"Limpa" as informações adiquiridas pelo teclado para evitar bugs.

                printf ("\nInsira um numero inteiro:");
                scanf ("%d", &inteiro);// & significa que estamos passando o endereco da memoria e nao o valor da variavel.

                printf ("\nInsira um numero decimal:");
                scanf ("%f", &decimal);

                printf ("\n%s o numero inteiro inserido foi %d e o decimal foi %.3f.\n", texto, inteiro, decimal);

                system ("pause"); // Pausar o console
                system ("cls"); // Limpa o console

                
}  
             