#include "imprimir_cubo.h"


void imprimirCubo(int matriz[6][3][3]){
    imprimirMatriz(matriz[0]);
    printf("\n");
    imprimirMatriz(matriz[1]);
    printf("\n");

    for (int j = 0; j < 3; j++)
    {
    for(int i = 0; i < 3; i++){
        cambiar_color(matriz[2][j][i]);
        printf("|%d| ", matriz[2][j][i]);
        printf("\033[0m");
    }
    printf(" ");
    for(int i = 0; i < 3; i++){
        cambiar_color(matriz[3][j][i]);
        printf("|%d| ", matriz[3][j][i]);
        printf("\033[0m");
    }
    printf(" ");
    for(int i = 0; i < 3; i++){
        cambiar_color(matriz[4][j][i]);
        printf("|%d| ", matriz[4][j][i]);
        printf("\033[0m");
    }
    printf("\n");
    }
    printf("\n");

    imprimirMatriz(matriz[5]);
}

void imprimirMatriz(int matriz[3][3]) {
    for (int i = 0; i < 3; i++) {
        printf("             ");
        for (int j = 0; j < 3; j++) {
            cambiar_color(matriz[i][j]);
            printf("|%d| ", matriz[i][j]);
            printf("\033[0m");
        }
        printf("\n");
    }
}

// blanco printf("\033[0m");
// rojo printf("\033[0;31m");
// verde printf("\033[0;32m");
// azul printf("\033[0;34m");
// amarillo printf("\033[0;33m");
// naranja printf("\033[0;38;5;214m");

void cambiar_color(int numero){
    switch (numero)
    {
    case 0:
        printf("\033[1m");
        break;
    case 1:
        printf("\033[1;38;5;214m");
        break;
    case 2:
        printf("\033[0;34m");
        break;
    case 3:
        printf("\033[1;33m");
        break;
    case 4:
        printf("\033[1;32m");
        break;
    case 5:
        printf("\033[1;31m");
        break;
    }
}