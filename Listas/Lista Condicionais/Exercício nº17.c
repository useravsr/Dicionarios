#include <stdio.h>
#include <locale.h>
int main(){

      setlocale(LC_ALL, "");
      int usuario=1234, usuario1, senha=9999, senha1;

      printf("INSIRA SEU NÚMERO DE USUARIO:");
      scanf("%i", &usuario1);

      while (usuario1!=usuario){

          printf("Usuário inválido!\n\n");
		      printf("INSIRA SEU NÚMERO DE USUARIO:");
          scanf("%i", &usuario1);
        
      } printf("Usuário válido!\n\n");

      printf("INSIRA SUA SENHA:");
      scanf("%i", &senha1);

      while (senha1!=senha){

          printf("Senha incorreta!\n\n");
		  printf("INSIRA SUA SENHA:");
          scanf("%i", &senha1);
        
      } printf("Acesso permitido!\n\n");
      
  
}