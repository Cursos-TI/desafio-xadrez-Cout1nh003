#include <stdio.h>

// Constantes para os movimentos de cada peça
#define TORRE_MOVIMENTOS 5
#define BISPO_MOVIMENTOS 5
#define RAINHA_MOVIMENTOS 8

int main() {
    // MOVIMENTO DA TORRE: 5 casas para a direita
    printf("Movimento da TORRE:\n");
    for (int i = 0; i < TORRE_MOVIMENTOS; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // MOVIMENTO DO BISPO: 5 casas na diagonal superior direita
    // Usaremos uma combinação de "Cima" e "Direita"
    printf("Movimento do BISPO:\n");
    int i = 0;
    while (i < BISPO_MOVIMENTOS) {
        printf("Cima\n");
        printf("Direita\n");
        i++;
    }

    printf("\n");

    // MOVIMENTO DA RAINHA: 8 casas para a esquerda
    printf("Movimento da RAINHA:\n");
    int j = 0;
    do {
        printf("Esquerda\n");
        j++;
    } while (j < RAINHA_MOVIMENTOS);

    return 0;
}
