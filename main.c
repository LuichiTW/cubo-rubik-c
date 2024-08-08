#include "main.h"

int main() {

//matriz ejemplo para pruebas
    int matriz[6][3][3] = {
            {{1, 2, 1},
            {1, 2, 1},
            {1, 2, 1}},

            {{2, 3, 2},
            {2, 3, 2},
            {2, 3, 2}},

{{3, 4, 3},
{3, 4, 3},
{3, 4, 3}},

            {{4, 5, 4},
            {4, 5, 4},
            {4, 5, 4}},

                        {{5, 6, 5},
                        {5, 6, 5},
                        {5, 6, 5}},
        
            {{6, 7, 6},
            {6, 7, 6},
            {6, 7, 6}}
    };


    /*
    for (int i = 0; i < 6; i++)
    {
        printf("Matriz original:\n");
    imprimirMatriz(matriz[i]);

    invertirMatriz(matriz[i]);

    printf("Matriz invertida:\n");
    imprimirMatriz(matriz[i]);
    }
    */

   imprimirCubo(matriz);
    

    

    return 0;
}