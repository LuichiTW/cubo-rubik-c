#include "main.h"

int main() {

//matriz ejemplo para pruebas
    int matriz[6][3][3] = {
            {{1, 2, 1},
            {1, 2, 1},
            {1, 2, 1}},

            {{1, 2, 3},
            {2, 3, 2},
            {2, 3, 2}},

{{1, 4, 3},
{2, 4, 3},
{3, 4, 3}},

            {{4, 5, 4},
            {4, 5, 4},
            {4, 5, 4}},

                        {{5, 6, 1},
                        {5, 6, 2},
                        {5, 6, 3}},
        
            {{6, 7, 6},
            {6, 7, 6},
            {1, 2, 3}}
    };

    imprimirCubo(matriz);
    printf("\n");
    girar_cara(0, matriz);
    imprimirCubo(matriz);

   return 0;
}