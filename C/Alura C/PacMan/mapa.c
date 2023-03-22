#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "fogefoge.h"
#include "mapa.h"

int andarNoMapa(MAPA* m, POSICAO* heroi, int x, int y){

    m->matriz[x][y] = HEROI;
    m->matriz[heroi->x][heroi->y] = VAZIO;
    heroi->x = x;
    heroi->y = y; 

}

int casaVazia(MAPA* m, int x, int y){

    return m->matriz[x][y] == VAZIO;

}

int limiteMapa(MAPA* m, int x, int y){

    if(x >= m->linhas) return 0;
    if(y >= m->colunas) return 0;

    return 1;

}

void encontraMapa(MAPA* m, POSICAO* p, char c){

    for(int i = 0; i < m->linhas; i++){

            for(int j = 0; j < m->colunas; j++){

                if(m->matriz[i][j] == c){

                    p -> x = i;
                    p -> y = j;
                    break;

                }

            }

        }


}

void alocarMapa(MAPA* m){

    // Alocação dinamica de memoria

        m->matriz = malloc(sizeof(char*)*m->linhas);
        for(int i = 0; i < m->linhas; i++){

            m->matriz[i] = malloc(sizeof(char)*m->colunas);

        }
 
}

void lerMapa(MAPA* m){

    FILE* f;
    
        f = fopen("mapa.txt","r");

        if(f == 0){

            printf("Erro na leitura do mapa!");
            exit(1);

        }
    
        fscanf(f,"%d %d", &m->linhas, &m->colunas);

        alocarMapa(m);

        for(int i=0; i < m->linhas; i++){

            fscanf(f,"%s", m->matriz[i]);

        }

        fclose(f);

}

void imprimirMapa(MAPA* m){
    

    for(int i = 0; i < m->linhas; i++){

        printf("%s\n", m->matriz[i]);

    }

}
void liberaMapa(MAPA* m){

    // Após a alocação de memoria, ela deve ser liberada.

    for(int i = 0; i < m->linhas; i++){

        free(m->matriz[i]);
    }

    free(m->matriz);

}
