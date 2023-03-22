#include <stdio.h>
#include <locale.h>
int main(){

            setlocale (LC_ALL, "");
            int vet  [3][3] = {{0, 0, 0},
                               {0, 0, 0},
                               {0, 0, 0}};

            int i, j;

            for (i=0; i<2; i++){    
                for (j=0; j<3; j++){ 

                    printf ("Insira o valor %d:", i, j);
                    scanf ("%d", &vet [i][j]);
                }      
                printf ("\n");
            }

            for ( i = 0; i < 2; i++){
                for ( j = 0; j < 3; j++){

                    printf ("%d ", vet [i][j]);
                }
                printf ("\n");
            }

            printf ("\n");
            return 0;



}