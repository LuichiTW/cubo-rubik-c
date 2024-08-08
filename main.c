#include "main.h"

int main() {

//matriz ejemplo para pruebas
    int matriz[6][3][3] = {
            {{1, 2, 1},
            {1, 2, 1},
            {1, 2, 3}},

            {{2, 3, 2},
            {2, 3, 2},
            {2, 3, 2}},

{{1, 2, 3},
{2, 4, 3},
{3, 4, 3}},

            {{1, 2, 3},
            {4, 5, 4},
            {4, 5, 4}},

                        {{1, 2, 3},
                        {5, 6, 5},
                        {5, 6, 5}},
        
            {{6, 7, 6},
            {6, 7, 6},
            {6, 7, 6}}
    };

    imprimirCubo(matriz);
    printf("\n");
    girar_cara(1, matriz);
    imprimirCubo(matriz);

   return 0;
}