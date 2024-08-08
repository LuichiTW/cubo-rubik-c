#include "imprimir_cubo.h"


void imprimirCubo(int matriz[6][3][3]){
    imprimirMatriz(matriz[0]);
    printf("\n");
    imprimirMatriz(matriz[1]);
    printf("\n");

    for (int j = 0; j < 3; j++)
    {
    for(int i = 0; i < 3; i++){
        printf("|%d| ", matriz[2][j][i]);
    }
    printf(" ");
    for(int i = 0; i < 3; i++){
        printf("|%d| ", matriz[3][j][i]);
    }
    printf(" ");
    for(int i = 0; i < 3; i++){
        printf("|%d| ", matriz[4][j][i]);
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
            printf("|%d| ", matriz[i][j]);
        }
        printf("\n");
    }
}