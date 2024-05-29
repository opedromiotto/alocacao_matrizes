Matriz e matriz transposta
Este repositório contém um código em C que realiza as seguintes operações:

Preenchimento de uma matriz com valores aleatórios.
Cálculo da matriz transposta.
Impressão das matrizes.
Liberação da memória alocada para as matrizes.
Estrutura do Código
O código está dividido em várias funções para modularizar as operações:

void preenche_matriz(int *matriz[], int linhas, int colunas): Preenche uma matriz com valores aleatórios entre 0 e 98.
void preenche_transposta(int *m_transposta[], int *matriz[], int linhas, int colunas): Calcula a transposta de uma matriz.
void imprime_matriz(int *matriz[], int linha, int coluna): Imprime uma matriz no console.
void libera_matriz(int *matriz[], int linhas): Libera a memória alocada para uma matriz.
int main(): Função principal que orquestra a execução do programa.
