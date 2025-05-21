#ifndef FITNESS_H
#define FITNESS_H

#include <stdlib.h>  

#include "populacao.h"

/**
 * @brief Calcula o valor fitness do indivíduo.
 * 
 * O fitness será baseado na distância de Manhattan entre a posição final do indivíduo e a saída,
 * penalizando movimentos inválidos.
 * 
 * @param individuo Ponteiro para o indivíduo
 * @param linha_saida Linha da saída no labirinto
 * @param coluna_saida Coluna da saída no labirinto
 * @return valor do fitness
 */
double calcular_fitness(const Individuo *individuo, int linha_saida, int coluna_saida);

#endif 
