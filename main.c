#include "main.h"

int main() {

//matriz ejemplo para pruebas
    int matriz[6][3][3] = {
            {{0, 0, 0},
            {0, 0, 0},
            {0, 0, 0}},

            {{1, 1, 1},
            {1, 1, 1},
            {1, 1, 1}},

{{2, 2, 2},
{2, 2, 2},
{2, 2, 2}},

            {{3, 3, 3},
            {3, 3, 3},
            {3, 3, 3}},

                        {{4, 4, 4},
                        {4, 4, 4},
                        {4, 4, 4}},
        
            {{5, 5, 5},
            {5, 5, 5},
            {5, 5, 5}}
    };

    imprimirCubo(matriz);
    printf("\n");
    printf("giro cara izquierda\n");
    girar_cara(2, matriz);
    imprimirCubo(matriz);
    printf("\n");
    printf("giro cara frontal\n");
    girar_cara(3, matriz);
    imprimirCubo(matriz);
    printf("\n");
    printf("giro cara derecha\n");
    girar_cara(4, matriz);
    imprimirCubo(matriz);
    printf("\n");
    printf("giro cara abajo\n");
    girar_cara(5, matriz);
    imprimirCubo(matriz);

   return 0;
}