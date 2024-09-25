#include "main.h"

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
    }


    return 0;
}