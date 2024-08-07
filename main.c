#include "main.h"

int main() {

//matriz ejemplo para pruebas
    int matriz[6][3][3] = {
            {{1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}},

            {{1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}},

{{1, 2, 3},
{4, 5, 6},
{7, 8, 9}},

            {{1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}},

                        {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}},
        
            {{1, 2, 3},
            {4, 5, 6},
            {7, 8, 9}}
    };

    printf("Matriz original:\n");
    imprimirMatriz(matriz[0]);

    invertirMatriz(matriz[0]);

    printf("Matriz invertida:\n");
    imprimirMatriz(matriz[0]);

    return 0;
}