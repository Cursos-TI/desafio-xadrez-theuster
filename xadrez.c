#include <stdio.h>


// MOVIMENTO RECURSIVO: TORRE

void moverTorre(int casasRestantes, int x, int y) {
    if (casasRestantes == 0) return;

    x++;
    printf("Direita\n");
    moverTorre(casasRestantes - 1, x, y);
}


// MOVIMENTO RECURSIVO: BISPO

void moverBispoRecursivo(int casasRestantes, int x, int y) {
    if (casasRestantes == 0) return;

    x++;
    y++;
    printf("Cima\n");
    printf("Direita\n");
    moverBispoRecursivo(casasRestantes - 1, x, y);
}


// MOVIMENTO RECURSIVO: RAINHA

void moverRainha(int casasRestantes, int x, int y) {
    if (casasRestantes == 0) return;

    x--;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1, x, y);
}


// MOVIMENTO COM LOOPS: CAVALO

void moverCavalo() {
    int x = 0, y = 0;

    printf("Cima\n");  // Primeira casa para cima
    for (int i = 1; i <= 2; i++) {
        y--;
        if (i == 1) {
            printf("Cima\n");
        } else if (i == 2) {
            printf("Cima\n");
        }
    }

    for (int j = 0; j < 1; j++) {
        x++;
        if (j == 0) {
            printf("Direita\n");
        } else {
            continue;
        }
    }

   
}


// MOVIMENTO COM LOOPS ANINHADOS: BISPO

void moverBispoComLoops(int casas) {
    int x = 0, y = 0;

    for (int i = 1; i <= casas; i++) {   
        y++;
        for (int j = 1; j <= 1; j++) {        
            x++;
            printf("Cima\n");
            printf("Direita\n");
        }
    }

  
}


// FUNCAO PRINCIPAL

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento da TORRE
    printf("=== Movimento da TORRE ===\n");
    printf("Posicao inicial: (0,0)\n");
    moverTorre(casasTorre, 0, 0);
    printf("Posicao final: (%d,0)\n\n", casasTorre);

    // Movimento do BISPO com recursividade
    printf("=== Movimento do BISPO ===\n");
    printf("Posicao inicial: (0,0)\n");
    moverBispoRecursivo(casasBispo, 0, 0);
    printf("Posicao final: (%d,%d)\n\n", casasBispo, casasBispo);

    // Movimento da RAINHA
    printf("=== Movimento da RAINHA ===\n");
    printf("Posicao inicial: (0,0)\n");
    moverRainha(casasRainha, 0, 0);
    printf("Posicao final: (-%d,0)\n\n", casasRainha);

    // Movimento do CAVALO
    printf("=== Movimento do CAVALO ===\n");
    printf("Posicao inicial: (0,0)\n");
    moverCavalo();
    printf("Posicao final: (1,-2)\n\n");

    // Movimento do BISPO com loops aninhados
    printf("=== Movimento do BISPO ===\n");
    printf("Posicao inicial: (0,0)\n");
    moverBispoComLoops(casasBispo);
    printf("Posicao final: (%d,%d)\n", casasBispo, casasBispo);

    return 0;
}
