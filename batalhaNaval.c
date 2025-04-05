#include <stdio.h>

int main() {
    char colunas[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    int tabuleiro[10][10] = {0}; // inicializa tudo com 0

    int tamanho_navio = 3;

    // Posição inicial do navio: linha 8 (índice 7), coluna B (índice 1)
    int linhaH = 7;
    int colunaH = 1;

    // Inserindo o navio horizontal
    for (int i = 0; i < tamanho_navio; i++) 
    {
        tabuleiro[linhaH][colunaH + i] = 3;
    }

    // Posição inicial do navio: linha 4 (índice 3), coluna I (índice 8)
    int linhaV = 3;
    int colunaV = 8;

    // Inserindo o navio vertical
    for (int i = 0; i < tamanho_navio; i++)
    {
        tabuleiro[linhaV - i][colunaV] = 3;
    }
    


    // Cabeçalho: letras das colunas
    printf("    ");
    for (int i = 0; i < 10; i++) // roda o código abaixo 10 vezes
    {
        printf("%c ", colunas[i]);
    }
    printf("\n");

    // Corpo do tabuleiro
    for (int i = 0; i < 10; i++) // roda o código abaixo 10 vezes
    {
        printf("%2d ", i + 1); // Números das linhas
        for (int j = 0; j < 10; j++) // roda o código abaixo 10 vezes
        {
            printf(" %d", tabuleiro[i][j]);
        }
        printf("\n");
    }



    return 0;
}
