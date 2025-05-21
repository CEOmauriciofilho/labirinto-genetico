#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "populacao.h"

static const char movimentos_possiveis[4] = {'C', 'B', 'E', 'D'};

void criar_populacao_inicial(Individuo *populacao, int tamanho_minimo_movimentos, int tamanho_maximo_movimentos) {
    srand((unsigned int)time(NULL));
    int tamanho_populacao = 10;

    for (int i = 0; i < tamanho_populacao; i++) {
        int tamanho_seq = tamanho_minimo_movimentos + rand() % (tamanho_maximo_movimentos - tamanho_minimo_movimentos + 1);
        populacao[i].tamanho_sequencia_movimentos = tamanho_seq;
        populacao[i].sequencia_movimentos = (char *)malloc(tamanho_seq * sizeof(char));
        populacao[i].valor_fitness;
        populacao[i].linha_final;
        populacao[i].coluna_final;
        populacao[i].penalizacoes;

        for (int j = 0; j < tamanho_seq; j++) {
            populacao[i].sequencia_movimentos[j] = movimentos_possiveis[rand() % 4];
        }
    }
}

void liberar_populacao(Individuo *populacao, int tamanho_populacao) {
    for (int i = 0; i < tamanho_populacao; i++) {
        free(populacao[i].sequencia_movimentos);
        populacao[i].sequencia_movimentos = NULL;
    }
}
