#include <stdio.h>
#include <locale.h>
int main(){

            setlocale (LC_ALL,"");
            int n1, c, resultado, soma=0; 
        

            for (n1 = 1; n1 <= 100; n1++) {

                resultado=0;
                for (c=1; c<=n1 ; c++){
                    
                    if (n1 % c==0){
                
                        resultado=resultado+1;
                        
                    }      
                }

                if (resultado==2)
                {
                   printf("%d ",n1);
                   soma=soma+n1; 
                }
            }

        printf("= %d",soma);
 
 
                
}