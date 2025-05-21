#include "simulacao.h"

/**
 * Movimentos:
 * 'C' = cima (-1, 0)
 * 'B' = baixo (+1, 0)
 * 'E' = esquerda (0, -1)
 * 'D' = direita (0, +1)
 */
void simular_caminho(Individuo *individuo, char mapa[LINHAS][COLUNAS], int linha_inicial, int coluna_inicial) {
    int linha = linha_inicial;
    int coluna = coluna_inicial;
    individuo->penalizacoes = 0;

    for (int i = 0; i < individuo->tamanho_sequencia_movimentos; i++) {
        char mov = individuo->sequencia_movimentos[i];
        int nova_linha = linha;
        int nova_coluna = coluna;

        switch (mov) {
            case 'C': nova_linha--; break;
            case 'B': nova_linha++; break;
            case 'E': nova_coluna--; break;
            case 'D': nova_coluna++; break;
        }

        // Verifica limites e parede
        if (nova_linha < 0 || nova_linha >= LINHAS || nova_coluna < 0 || nova_coluna >= COLUNAS || mapa[nova_linha][nova_coluna] == '#') {
            individuo->penalizacoes++;
            switch (mov) {
            case 'C': nova_linha++; break;
            case 'B': nova_linha--; break;
            case 'E': nova_coluna++; break;
            case 'D': nova_coluna--; break;
        }

        } else {
            linha = nova_linha;
            coluna = nova_coluna;
        }
    }
    individuo->linha_final = linha;
    individuo->coluna_final = coluna;
}
