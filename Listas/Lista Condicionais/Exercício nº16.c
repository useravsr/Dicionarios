#include <stdio.h>
#include <locale.h>
int main(){

      setlocale(LC_ALL, "");
      float morango, maca, valor, peso, valor1, valor2;

      printf("Insira a quantidade em Kg de morangos:");
      scanf("%f", &morango);
      printf("Insira a quantidade em Kg de maçãs:");
      scanf("%f", &maca);

          peso=morango+maca;
  
      if(morango>5){

        valor1=morango*2.20;
        
      }else {valor1=morango*2.50;}
      
      if(maca>5){

        valor2=maca*1.50;
        
      }else {valor2=maca*1.80;}

          valor=valor1+valor2;

      if(valor>25 || peso>8){

          valor=valor- (valor*0.10);
          
        
      }

     printf("O valor total a ser pago é %.2f R$.",valor); 
  
}