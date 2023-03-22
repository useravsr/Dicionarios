#include <stdio.h>
#include <string.h>
int main(){

            int tamanho = 0;
            char nome [50];
            char frase[] = "Testando testando testando";

                printf ("Insira um nome:");
                fgets  (nome,50,stdin);  
                tamanho =  strlen (frase) ;
                printf ("O nome inserido tem %d letras.", tamanho); 
                printf ("%c", frase[0] );
                return 0;
                
}