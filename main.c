#include <stdio.h>

// Constantes para limites de movimentos
#define BISPO_MOVES 5
#define TORRE_MOVES 5
#define RAINHA_MOVES 8

int main() {
    int i;

    printf("Movimentação do Bispo (Diagonal Superior Direita):\n");
    for (i = 0; i < BISPO_MOVES; i++) {
        printf("Diagonal Superior Direita: (%d, %d)\n", i + 1, i + 1);
    }

    printf("\nM
