#include <stdio.h>
#include <locale.h>
#include <math.h>
int main(){

        setlocale(LC_ALL, "");
       float n1, n2, resultado;
       char opcao;
       int n3, n4;

        printf("Escolha o que deve ser feito com os valores inseridos:\ns = Soma\nb = Subtra��o\nm = Multiplica��o\nd = Divis�o\nq = Quociente da divis�o\nr = Resto da divis�o\ne = A elevado a B\nz = Raiz quadrada de B\n>");
        scanf("%c", &opcao);

        printf("Insira 2 valores:");
        scanf("%f %f", &n1, &n2);
     
            switch(opcao){

                case 's':
                    resultado = n1 + n2;
                    printf("%.2f", resultado);
                    break; 

                case 'b':
                    resultado = n1 - n2;
                    printf("%.2f", resultado);
                    break; 

                case 'm':
                    resultado = n1 * n2;
                    printf("%.2f", resultado);
                    break;

                case 'd':
                    resultado = n1/n2;
                    printf("%.2f", resultado);
                    break;

                case 'q':
                    resultado = n1/n2;
                    printf("%.0f", resultado);
                    break;

                case 'r':
                    n3=n1;
                    n4=n2;
                    resultado = n3 % n4;
                    printf("%.0f", resultado);
                    break;

                case 'e':
                    resultado=pow(n1,n2);
                    printf("%.2f", resultado);
                    break;

                case 'z':
                    resultado=sqrt(n2);
                    printf("%.2f", resultado);
                    break;

            default:
                printf("Opera��o inserida n�o encontrada!");
                break;

            }    

    return 0;
}