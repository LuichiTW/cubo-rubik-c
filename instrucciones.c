#include "instrucciones.h"

//Ej: L' 2T B
//toma caracteres en mayuscula para el giro de las caras
//' es un giro en sentido anti horario
//el numero es la cantidad de veces que repite el movimiento

//! implementar
//toma un string y lo separa en varios caracteres que luego se pasa a caracter_a_instruccion
void string_a_caracteres(char input[100]){
    char *token = strtok(input, " "); // Separar el string por espacios

    while (token != NULL) {
        caracter_a_instruccion(token); // Pasar cada palabra a la función
        token = strtok(NULL, " "); // Obtener la siguiente palabra
    }
}


/*
U (Up): Capa Superior
D (Down): Capa Inferior
R (Right): Capa Derecha
L (Left): Capa Izquierda
F (Front): Capa Frontal
B (Back): Capa Trasera
*/

//! implementar
//toma un caracter y lo ejecuta como instruccion
void caracter_a_instruccion(char caracter){
    switch (caracter) {
        case 'B':
            girar_cara(ATRAS, cubo_rubik);

            break;
        case 'U':
            girar_cara(ARRIBA, cubo_rubik);
            break;
        case 'L':
            girar_cara(IZQUIERDA, cubo_rubik);
            break;
        case 'F':
            girar_cara(FRENTE, cubo_rubik);
            break;
        case 'R':
            girar_cara(DERECHA, cubo_rubik);
            break;
        case 'D':
            girar_cara(ABAJO, cubo_rubik);
            break;    
        default:
            printf("Instrucción no reconocida: %c\n", caracter);
            break;
    }
}