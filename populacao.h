#ifndef POPULACAO_H
#define POPULACAO_H

/**
 * @file populacao.h
 * @brief Define o tipo Individuo e funções para criação e liberação da população.
 */

typedef struct {
    char *sequencia_movimentos;       /**< Sequência dinâmica de movimentos ('C', 'B', 'E', 'D') */
    int tamanho_sequencia_movimentos; /**< Tamanho da sequência */
    double valor_fitness;              /**< Valor da função fitness */
    int linha_final;                   /**< Linha final após simulação */
    int coluna_final;                  /**< Coluna final após simulação */
    int penalizacoes;                  /**< Penalizações por movimentos inválidos */
} Individuo;

/**
 * @brief Cria população inicial com 10 indivíduos.
 * 
 * Cada indivíduo terá sequência aleatória de movimentos entre tamanho mínimo e máximo.
 * 
 * @param populacao Vetor de indivíduos (deve ter tamanho 10)
 * @param tamanho_minimo_movimentos Tamanho mínimo da sequência
 * @param tamanho_maximo_movimentos Tamanho máximo da sequência
 */
void criar_populacao_inicial(Individuo *populacao, int tamanho_minimo_movimentos, int tamanho_maximo_movimentos);

/**
 * @brief Libera a memória das sequências dos indivíduos.
 * 
 * @param populacao Vetor de indivíduos
 * @param tamanho_populacao Tamanho do vetor (10)
 */
void liberar_populacao(Individuo *populacao, int tamanho_populacao);

#endif 