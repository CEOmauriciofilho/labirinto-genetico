# Labirinto com Algoritmos Genéticos

Este projeto consiste na implementação de um sistema de resolução de labirintos utilizando algoritmos genéticos. A aplicação simula uma população de indivíduos tentando encontrar a saída de um labirinto fixo, evoluindo a cada geração com base em critérios de desempenho (fitness).

## 📁 Estrutura do Projeto

O código está organizado em arquivos `.c` e `.h` separados por responsabilidade:

- **`main.c`** – Responsável pela execução principal do algoritmo genético.
- **`mapa.h`** – Define os labirintos utilizados e suas estruturas internas.
- **`populacao.c` / `populacao.h`** – Criação, alocação e liberação da população inicial.
- **`simulacao.c` / `simulacao.h`** – Realiza a simulação dos movimentos de cada indivíduo no labirinto.
- **`fitness.c` / `fitness.h`** – Avalia o desempenho dos indivíduos com base na posição final, penalidades e distância até a saída.

## ⚙️ Compilação

Para compilar o projeto, utilize o comando:

```bash
gcc main.c populacao.c simulacao.c fitness.c -o labirinto
