#ifndef SIMULACAO_H
#define SIMULACAO_H

#include "populacao.h"
#include "mapa.h"

/**
 * @brief Simula o caminho do indivíduo no labirinto.
 * Atualiza posição final e penalizações.
 * 
 * @param individuo Ponteiro para indivíduo a simular
 * @param mapa Labirinto 10x10
 * @param linha_inicial Linha inicial do indivíduo (posição de 'S')
 * @param coluna_inicial Coluna inicial do indivíduo
 */
void simular_caminho(Individuo *individuo, char mapa[LINHAS][COLUNAS], int linha_inicial, int coluna_inicial);

#endif 
