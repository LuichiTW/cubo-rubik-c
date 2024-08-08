#include "giro_de_caras.h"

//gira una cara en sentido horario actualizando las otras caras
void girar_cara(int cara, int matriz[6][3][3]){
    switch (cara)
    {
    case ATRAS:
        invertirMatriz(matriz[ATRAS]);
        // afecta las caras izquierda, arriba, derecha y abajo
        //actualizar_caras(/*columna o fila*/, /*nivel del 1 a 3*/, /*cara a afectar*/);
        break;
    case ARRIBA:
        invertirMatriz(matriz[ARRIBA]);
        // afecta las caras frente, derecha, atras, izquierda
        break;
    case IZQUIERDA:
        invertirMatriz(matriz[IZQUIERDA]);
        // afecta las caras arriba, frente, abajo, atras
        break;
    case FRENTE:
        invertirMatriz(matriz[FRENTE]);
        // afecta las caras izquierda, arriba, derecha y abajo
        break;
    case DERECHA:
        invertirMatriz(matriz[DERECHA]);
        // afecta las caras arriba, frente, abajo, atras
        break;
    case ABAJO:
        invertirMatriz(matriz[ABAJO]);
        // afecta las caras frente, derecha, atras, izquierda
        break;
    }
}


//gira la matriz en dirreccion horaria
void invertirMatriz(int matriz[3][3]) {
    // Intercambiar elementos a lo largo de la diagonal principal
    for (int i = 0; i < 3; i++) {
        for (int j = i + 1; j < 3; j++) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[j][i];
            matriz[j][i] = temp;
        }
    }

    // Intercambiar elementos a lo largo de la línea media vertical
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 / 2; j++) {
            int temp = matriz[i][j];
            matriz[i][j] = matriz[i][3 - j - 1];
            matriz[i][3 - j - 1] = temp;
        }
    }
}


void actualizar_caras(int tipo, int nivel, int cara1[3][3], int cara2[3][3], int cara3[3][3], int cara4[3][3]){
    int aux[3]; 
    switch (tipo)
    {
    case 0: //fila
        
        break;
    case 1: //columna
        
        break;
    }
}
