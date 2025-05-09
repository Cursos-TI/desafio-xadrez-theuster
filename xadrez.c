#include <stdio.h>

int main() {
    printf("=== SIMULADOR DE MOVIMENTOS DE XADREZ ===\n\n");

    // 1. Movimento da Torre (5 casas para a direita)
    printf("\n--- Movimento da Torre ---\n");
    printf("Posição inicial: (0,0)\n");
    printf("Movendo 5 casas para a direita:\n");

    for (int i = 1; i <= 5; i++) {
        printf("Direita - Casa %d\n", i);
    }
    printf("Posição final: (5,0)\n");

    // 2. Movimento do Bispo (5 casas na diagonal superior direita)
    printf("\n--- Movimento do Bispo ---\n");
    printf("Posição inicial: (0,0)\n");
    printf("Movendo 5 casas na diagonal superior direita:\n");

    int casa_bispo = 1;
    while (casa_bispo <= 5) {
        printf("Cima, Direita - Casa %d\n", casa_bispo);
        casa_bispo++;
    }
    printf("Posição final: (5,5)\n");

    // 3. Movimento da Rainha (8 casas para a esquerda)
    printf("\n--- Movimento da Rainha ---\n");
    printf("Posição inicial: (0,0)\n");
    printf("Movendo 8 casas para a esquerda:\n");

    int casa_rainha = 1;
    do {
        printf("Esquerda - Casa %d\n", casa_rainha);
        casa_rainha++;
    } while (casa_rainha <= 8);
    printf("Posição final: (-8,0)\n");

    // 4. Movimento do Cavalo (2 casas para baixo e 1 para a esquerda)
    printf("\n--- Movimento do Cavalo ---\n");
    printf("Posição inicial: (0,0)\n");

    // Definindo os deslocamentos
    int movimentos_baixo = 2;
    int movimentos_esquerda = 1;

    // Primeiro movimento: 2 casas para baixo
    for (int i = 1; i <= movimentos_baixo; i++) {
        printf("Baixo - Passo %d\n", i);

        // Loop interno para simular qualquer ação durante o movimento
        int contador = 0;
        while (contador < 1) 
        { 
            contador++;
        }
    }

    // Segundo movimento: 1 casa para a esquerda (após as 2 para baixo)
    int j = 1;
    while (j <= movimentos_esquerda) {
        printf("Esquerda - Passo %d\n", j);
        j++;
    }

    printf("Posição final: (-1,2)\n");

    return 0;
}