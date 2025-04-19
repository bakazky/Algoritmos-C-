#include <stdio.h>
int main() {
    int matrizA[3][3], matrizB[3][3], resultado[3][3] = {0};

    printf("Digite os valores da matriz A (3x3):\n");       //Entrada de números da matriz A
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("MatrizA[%d][%d]: ", i, j);
            scanf("%d", &matrizA[i][j]);
        }
    }

    printf("Digite os valores da matriz B (3x3):\n");       //Entrada de números da matriz B
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("MatrizB[%d][%d]: ", i, j);
            scanf("%d", &matrizB[i][j]);
        }
    }

    for (int i = 0; i < 3; i++) {       //Multiplicação de matrizes
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 3; k++) {
                resultado[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }

    printf("Resultado da multiplicacao das matrizes A e B:\n");     //Impressão da multiplicação
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", resultado[i][j]);
        }
        printf("\n");
    }

    return 0;
}