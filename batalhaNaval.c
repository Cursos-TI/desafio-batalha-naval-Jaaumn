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
    
    // Inserindo navio diagonal principal
    for (int i = 1; i < 4; i++)
    {
        tabuleiro [i][i] = 3;
    }

    // inicializando posições iniciais do navio 4
    int linhainicialnavio4 = 7;
    int colunainicialnavio4 = 8;

    for (int i = 7; i < 10; i++)
    {
        for (int j = 8; j < 9; j++)
        {
            tabuleiro [linhainicialnavio4][colunainicialnavio4] = 3;
            linhainicialnavio4++;
            colunainicialnavio4--;
        }
        
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
