#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fogefoge.h"
#include "mapa.h"

    MAPA m;
    POSICAO heroi;

void cabecalho(){

    system("cls");

    printf("*******************************************\n");
    printf("*    Bem vindo ao nosso jogo do PacMan    *\n");
    printf("*******************************************\n\n");

}

int ehDirecao(char direcao){

    return direcao == ESQUERDA || direcao == DIREITA || direcao == BAIXO || direcao == CIMA;

}

void moverPersonagem(char direcao){

    if(!ehDirecao(direcao)) return;

    int proximoX = heroi.x;
    int proximoY = heroi.y;
    
        switch (direcao){

            case ESQUERDA:
                proximoY--;
                break;
            case CIMA:
                proximoX--;
                break;
            case BAIXO:
                proximoX++;
                break;
            case DIREITA:
                proximoY++;
                break;
        }

    if(!limiteMapa(&m, proximoX, proximoY)) return;
    if(!casaVazia(&m, proximoX, proximoY)) return; 

    andarNoMapa(&m, &heroi, proximoX, proximoY);

}


int main(){

    int ganhou = 0;
    int acabou = 0;
    char comando;

        lerMapa(&m);
        encontraMapa(&m, &heroi, HEROI);

        do{
            
            cabecalho();
            imprimirMapa(&m);

            printf("\n\nMova o personagem! (\"A\" \"W\" \"S\" \"D\"): ");
            scanf("%c", &comando);
            fflush(stdin);

            moverPersonagem(comando);

        }while(!acabou && !ganhou);

        liberaMapa(&m);

    return 0;

}