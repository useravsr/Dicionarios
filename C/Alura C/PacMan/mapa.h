#define HEROI '@'
#define VAZIO '.'
#define PAREDE_VERTICAL '|'
#define PAREDE_HORIZONTAL '-'

struct mapa {

    char** matriz;
    int linhas;
    int colunas;

};

typedef struct mapa MAPA; //typedef da um apelido struct mapa, sendo necessario utilizar apenas MAPA.

struct posicao{

    int x;
    int y;

};

typedef struct posicao POSICAO;

void alocarMapa(MAPA* m);
void lerMapa(MAPA* m);
void imprimirMapa(MAPA* m);
void liberaMapa(MAPA* m);
void encontraMapa(MAPA* m, POSICAO* p, char c);


int limiteMapa(MAPA* m, int x, int y);
int casaVazia(MAPA* m, int x, int y);
int andarNoMapa(MAPA* m, POSICAO* heroi, int x, int y);


