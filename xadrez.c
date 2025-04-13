#include <stdio.h>

int main() {
    printf("=== SIMULADOR DE MOVIMENTOS DE XADREZ ===\n\n");

    // 1. Movimento da Torre (5 casas para a direita) - usando FOR
    printf("\n--- Movimento da Torre ---\n");
    printf("Posição inicial: (0,0)\n");
    printf("Movendo 5 casas para a direita:\n");
    
    for (int i = 1; i <= 5; i++) {
        printf("Direita - Casa %d\n", i);
    }
    printf("Posição final: (5,0)\n");

    // 2. Movimento do Bispo (5 casas na diagonal superior direita) - usando WHILE
    printf("\n--- Movimento do Bispo ---\n");
    printf("Posição inicial: (0,0)\n");
    printf("Movendo 5 casas na diagonal superior direita:\n");
    
    int casa_bispo = 1;
    while (casa_bispo <= 5) {
        printf("Cima, Direita - Casa %d\n", casa_bispo);
        casa_bispo++;
    }
    printf("Posição final: (5,5)\n");

    // 3. Movimento da Rainha (8 casas para a esquerda) - usando DO-WHILE
    printf("\n--- Movimento da Rainha ---\n");
    printf("Posição inicial: (0,0)\n");
    printf("Movendo 8 casas para a esquerda:\n");
    
    int casa_rainha = 1;
    do {
        printf("Esquerda - Casa %d\n", casa_rainha);
        casa_rainha++;
    } while (casa_rainha <= 8);
    printf("Posição final: (-8,0)\n");

    return 0;
}