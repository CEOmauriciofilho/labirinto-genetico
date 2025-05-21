#ifndef MAPA_H
#define MAPA_H

/**
 * @file mapa.h
 * @brief Define o labirinto 10x10 fixo para o projeto.
 * 
 * Representação do labirinto usando:
 * '#' = parede
 * 'S' = posição inicial
 * 'E' = saída
 * ' ' = caminho livre
 */

#define LINHAS 10
#define COLUNAS 10

static char mapa[LINHAS][COLUNAS] = {
    {'#','#','#','#','#','#','#','#','#','#'},
    {'#','S',' ',' ',' ','#',' ',' ','E','#'},
    {'#','#','#',' ','#','#','#',' ','#','#'},
    {'#',' ',' ',' ',' ',' ','#',' ',' ','#'},
    {'#',' ','#','#','#',' ','#','#',' ','#'},
    {'#',' ','#',' ',' ',' ',' ','#',' ','#'},
    {'#',' ','#','#','#','#',' ','#',' ','#'},
    {'#',' ',' ',' ','#',' ',' ',' ',' ','#'},
    {'#','#','#',' ','#','#','#','#','#','#'},
    {'#','#','#','#','#','#','#','#','#','#'}
};

#endif 
