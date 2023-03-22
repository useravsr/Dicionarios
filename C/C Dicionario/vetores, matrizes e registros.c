#include <stdio.h>
#include <locale.h>
int main(){
            
            setlocale (LC_ALL, "");
            int i, vet[5] = {0, 0, 0, 0, 0};
            


            for (i=0; i<5; i++){

                printf ("%d ", i);
                scanf ("%d", &vet[i]);  
                            
            }

           for ( i = 0; i < 5; i++){

               printf ("%d ", vet[i]);
           }

            
                
            
            
        
            

}