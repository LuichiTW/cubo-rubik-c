#include "main.h"

int main() {
    int matriz[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Matriz original:\n");
    imprimirMatriz(matriz);

    invertirMatriz(matriz);

    printf("Matriz invertida:\n");
    imprimirMatriz(matriz);

    return 0;
}