#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void preenche_matriz(int *matriz[], int linhas, int colunas){

    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            matriz[i][j] = rand() % 99;
        }
    }
}

void preenche_transposta(int *m_transposta[], int *matriz[], int linhas, int colunas){

    for(int i = 0; i < colunas; i++){
        for(int j = 0; j < linhas; j++){
            m_transposta[i][j] = matriz[j][i];
        }
    }
}

void imprime_matriz(int *matriz[], int linha, int coluna){

    for(int i = 0; i < linha; i++){
        for(int j = 0; j < coluna; j++){
            printf("%.2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

void libera_matriz(int *matriz[], int linhas){
    for(int i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
}


int main(){
    int **matriz, l, c;

    printf("Quantas linhas deseja que a matriz tenha?: ");
    scanf("%d", &l);
    printf("Quantas colunas deseja que a matriz tenha?: ");
    scanf("%d", &c);

    matriz = calloc(l, sizeof(int *));
    if(matriz == NULL){
        printf("Erro na alocacao");
        return 1;
    }

    for(int i = 0; i < l; i++){
        matriz[i] = calloc(c, sizeof(int));
        if(matriz[i] == NULL){
            printf("Erro na alocacao");
            return 1;
        }
    }

    preenche_matriz(matriz, l, c);
    printf("Matriz:\n");
    imprime_matriz(matriz, l, c);
    
    int **m_transposta;

    m_transposta = calloc(c, sizeof(int *));

    if(m_transposta == NULL){
        printf("Erro na alocacao");
        return 1;
    }

    for(int i = 0; i < c; i++){
        m_transposta[i] = calloc(l, sizeof(int));
        if(m_transposta[i] == NULL){
            printf("Erro na alocacao");
            return 1;
        }
    }

    preenche_transposta(m_transposta, matriz, l, c);
    printf("Matriz transposta:\n");
    imprime_matriz(m_transposta, c, l);
    
    libera_matriz(matriz, l);
    libera_matriz(m_transposta, c);

    return 0;
}