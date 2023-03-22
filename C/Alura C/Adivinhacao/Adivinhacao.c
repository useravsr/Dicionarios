#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

int cabecalho(){

        printf("*******************************************\n");
        printf("* Bem vindos ao nosso jogo de adivinhacao *\n");
        printf("*******************************************\n\n");

}


int darChances(int *nivel, int *chance){

    int dificuldade;

    printf("Escolha um nivel:\n 1 - Facil \n 2 - Medio \n 3 - Dificil\n >");
    scanf("%i", &dificuldade);

            if(dificuldade == 1){ 

              *nivel = 1;
              *chance = 9;
              
            } else if(dificuldade == 2){ 

                  *nivel = 2;
                  *chance = 7;
              
                  } else if(dificuldade == 3){ 

                        *nivel = 3;
                        *chance = 4;
              
                        }
    
}



int repeticao(int chances, int *chute, int numeroSecreto, int *tentativas){

    int chuteVerifica;

    for(chances ; chances != 0 ; chances--){   

        if(chuteVerifica == numeroSecreto) break;

            system("cls");
            
            cabecalho();

        if(*chute < numeroSecreto) printf(" - Seu numero e menor que o numero secreto!\n\n");
        if(*chute > numeroSecreto) printf(" - Seu numero e maior que o numero secreto!\n\n");

            int teste = (*chute < 0 ) ? printf("Voce nao pode chutar numeros negativos!\n") : printf("Seu chute foi %i!\n", *chute);
            printf("Numero de chances restantes: %i\n", chances);
            printf("Numero de tentativas: %i \n\n", ++(*tentativas));
            printf("Voce errou, tente novamente: ");
            scanf("%i", &chuteVerifica);
            *chute = chuteVerifica;             
    }


}

int reinicio(){

    int reinicio = 0;

        system("cls");

        cabecalho();

        printf("Deseja reiniciar o jogo?\n 1 - Sim \n 2 - Nao\n > ");
        scanf("%i", &reinicio);

        system("cls");

        if(reinicio == 1) main();

}

int pontos(int n1, int n2){

    int pontos = 1000;

    switch(n1){

            case 1:
                pontos += (n2*-100);
                break;

            case 2 :
                pontos += (n2*-125);
                break;
        
            case 3:
                pontos += (n2*-200);
                break;

        }

        printf("Sua pontuacao foi %i pontos!\n\n", pontos);
   
    system("pause");

        reinicio ();

}

int main(){

    setlocale(LC_ALL, "");
    srand(time(NULL));
    int numeroSecreto = rand() % 100;
    int chute;
    int tentativas = 0;
    int nivel;
    int chances;

        cabecalho();
      
        darChances(&nivel, &chances);

        system("cls");

        cabecalho();

        printf("Chute um numero: ");
        scanf("%i", &chute);

            int teste = (chute < 0 )? printf("Voce nao pode chutar numeros negativos!\n"):printf("Seu chute foi %i!\n", chute);


        repeticao(chances, &chute, numeroSecreto, &tentativas);
        
        system("cls");

        cabecalho();

        if (chute == numeroSecreto) printf("\nParabens, voce acertou depois de %i tentativas!\n", tentativas);

        if (chute != numeroSecreto){ 

            printf("\nVoce perdeu, mais sorte na proxima vez!\n");
            tentativas++;

        }

        pontos(nivel, tentativas);

              
}

