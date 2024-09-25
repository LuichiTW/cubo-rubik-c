#ifndef MAIN
#define MAIN

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <windows.h>

#include "imprimir_cubo.h"
#include "instrucciones.h" //incluye a giro_de_caras

/* representacion grafica
    |0|
    |0|
 |0||0||0|
    |0|
*/
int cubo_rubik[6][3][3]= {
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

#endif // !MAIN