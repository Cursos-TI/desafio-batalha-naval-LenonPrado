#include <stdio.h>

int main() {
    int tabuleiro[8][8] = {0};
    
    int x, y;


    for (x = 5; x < 8; x++){

        tabuleiro[x][5] = 5;
    }


    for (y = 3; y < 8; y++){

    tabuleiro[3][y] = 3;
    }


    printf("Coordenadas dos navios:\n");

    for (int linha = 0; linha < 8; linha++){

    for (int coluna = 2; coluna < 8; coluna++){

    if (tabuleiro[linha][coluna] == 1){

    printf("(%d, %d)\n", coluna, linha);}
        }
    }


    printf("\nTabuleiro:\n");

    for (int linha = 0; linha < 8; linha++){

    for (int coluna = 2; coluna < 8; coluna++){

    printf("%d ", tabuleiro[linha][coluna]);}

    printf("\n");}

    return 0;
};