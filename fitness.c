#include "fitness.h"

double calcular_fitness(const Individuo *individuo, int linha_saida, int coluna_saida) {
    int dist_manhattan = abs(individuo->linha_final - linha_saida) + abs(individuo->coluna_final - coluna_saida);
    // Fitness menor é melhor, vamos inverter para que maior seja melhor
    // Adiciona penalizações para movimentos inválidos (maior penalização reduz fitness)
    double fitness = 1000.0 / (1 + dist_manhattan + individuo->penalizacoes);
    return fitness;
}
