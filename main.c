#include <stdio.h>
#include "mapa.h"
#include "populacao.h"
#include "simulacao.h"
#include "fitness.h"

#define TAMANHO_POPULACAO 10

int main(void) {
    Individuo populacao[TAMANHO_POPULACAO];

    // Linha e coluna da posição inicial 'S'
    int linha_inicial = 1;
    int coluna_inicial = 1;

    // Linha e coluna da saída 'E'
    int linha_saida = 1;
    int coluna_saida = 8;

    // Distância de Manhattan entre início e saída (fixo para seu mapa)
    int dist_manhattan = 7;

    // Criar população inicial com sequências de tamanho entre dist_manhattan e dist_manhattan*2
    criar_populacao_inicial(populacao, dist_manhattan, dist_manhattan * 2);

    // Simular cada indivíduo e calcular fitness
    for (int i = 0; i < TAMANHO_POPULACAO; i++) {
        simular_caminho(&populacao[i], mapa, linha_inicial, coluna_inicial);
        populacao[i].valor_fitness = calcular_fitness(&populacao[i], linha_saida, coluna_saida);
    }

    // Imprimir resultados
    for (int i = 0; i < TAMANHO_POPULACAO; i++) {
        printf("Indivíduo %d:\n", i);
        printf("  Movimentos: ");
        for (int j = 0; j < populacao[i].tamanho_sequencia_movimentos; j++) {
            printf("%c ", populacao[i].sequencia_movimentos[j]);
        }
        printf("\n  Posição final: (%d, %d)\n", populacao[i].linha_final, populacao[i].coluna_final);
        printf("  Penalizações: %d\n", populacao[i].penalizacoes);
        printf("  Fitness: %.2f\n\n", populacao[i].valor_fitness);
    }

    liberar_populacao(populacao, TAMANHO_POPULACAO);
    system("pause");

    return 0;
}
