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



   return 0;
}