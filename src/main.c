#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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



int main() {
    char input[100]; // Buffer para almacenar la entrada del usuario

    while (1) {
        // Llamar a la función para imprimir el cubo
        imprimirCubo(cubo_rubik);
        
        printf("Introduce una instrucción (deja vacío para terminar): ");
        fgets(input, sizeof(input), stdin);

        // Eliminar el salto de línea al final del string
        input[strcspn(input, "\n")] = 0;

        // Verificar si el string está vacío
        if (strlen(input) == 0) {
            break;
        }

        // Procesar la instrucción
        string_a_caracteres(input);
        system("clear");
    }


    return 0;
}
