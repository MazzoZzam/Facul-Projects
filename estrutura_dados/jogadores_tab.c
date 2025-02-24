#include <stdio.h>

//prototipando funcoes
void ordenar_players(int id[], int tam);
void obter_id(int id[], int tam);

int main() {
    int players;
    
    //desenhando na tela, eu acho...
    printf("*********************************************************\n");
    printf("___CAMPEONATO OFICIAL DE TABULEIROS DE MOGI DAS CRUZES___\n");
    printf("************Sistema Gerenciador de Jogadores*************\n");

    //requisantando a quantidade de players para inicializar o vetor
    printf("Quantos jogadores serao registrados? ");
    scanf("%d", &players);

    //inicializando vetor com valor de players
    int id_players[players];

    //obtendo id's dos players
    printf("\nDigite o ID dos jogadores: \n");
    obter_id(id_players, players);
    
    //chamada de funcao, mandando vetor e seu tamanho
    ordenar_players(id_players, players);

    //apresentado players
    printf("\nPlayers ordenados: \n");
    for (int i = 0; i < players; i++) {
        printf("Jogador %d - ID: %d \n", i + 1, id_players[i]);
    }

    return 0;
}

//funcao para ordenacao, usando insert sort
void ordenar_players(int id[], int tam) {
    //indices
    int i, j, x;
    //variavel auxiliar, para nao perder valores trocados
    int aux;

    for (i = 1; i < tam; i++) {
        j = i - 1;
        x = i;

        //evitando que x chegue em 0, para nao causar um loop infinito
        //enquanto o valor atual, for menor que o anterior, continue trocando
        while ((x != 0) && (id[x] < id[j])) {
            //trocando valores
            aux = id[x];
            id[x] = id[j];
            id[j] = aux;
            //decrementando indices, para continuar trocando valores se necessario
            x--;
            j--;
        }
    }
}

void obter_id(int id[], int tam) {
    int i;
    for (i = 0; i < tam; i++) {
        printf("Jogador %d: ", i + 1);
        scanf("%d", &id[i]);
    }
}