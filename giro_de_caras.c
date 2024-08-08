#include "giro_de_caras.h"

//gira una cara en sentido horario actualizando las otras caras
void girar_cara(int cara, int matriz[6][3][3]){
    int aux[3];
    switch (cara)
    {
    case ATRAS:
        invertirMatriz(matriz[ATRAS]);
        // afecta las caras:
        /*
        izquierda(columna izquierda)
        arriba(fila superior)
        derecha (columna derecha)
        abajo(fila inferior)
        */
        copiar_array_columna(matriz[IZQUIERDA], L_IZQUIERDA, 0, 0, aux);
        copiar_array_columna(matriz[IZQUIERDA], L_IZQUIERDA, 1, 1, matriz[ARRIBA][SUPERIOR]);
        copiar_array_columna(matriz[DERECHA], L_DERECHA, 0, 0, matriz[ARRIBA][SUPERIOR]);
        copiar_array_columna(matriz[DERECHA], L_DERECHA, 1, 1, matriz[ABAJO][INFERIOR]);
        copiar_array_fila(aux, matriz[ABAJO][INFERIOR]);
        break;
    case ARRIBA:
        invertirMatriz(matriz[ARRIBA]);
        // afecta las caras: 
        /*
        frente(fila superior)
        derecha(fila superior)
        atras(fila inferior)
        izquierda(fila superior)
        */
        copiar_array_fila(matriz[FRENTE][SUPERIOR], aux);
        
        break;
    case IZQUIERDA:
        invertirMatriz(matriz[IZQUIERDA]);
        // afecta las caras arriba(columna izquierda), frente(columna izquierda), abajo(columna izquierda), atras(columna izquierda)
        break;
    case FRENTE:
        invertirMatriz(matriz[FRENTE]);
        // afecta las caras izquierda(columna derecha), arriba(fila inferior), derecha(columna derecha) y abajo(fila superior)
        break;
    case DERECHA:
        invertirMatriz(matriz[DERECHA]);
        // afecta las caras arriba(columna derecha), frente(columna derecha), abajo(columna derecha), atras(columna derecha)
        break;
    case ABAJO:
        invertirMatriz(matriz[ABAJO]);
        // afecta las caras frente(fila inferior), derecha(fila inferior), atras(fila superior), izquierda(fila inferior)
        break;
    }
}

void copiar_array_fila(int origen[3], int destino[3]){
    for(int i = 0; i < 3; i++){
        destino[i] = origen[i];
    }
}

void copiar_array_columna(int origen[3][3], int lado, int invert_origen, int invert_lista, int destino[3]){
    if (invert_lista == 0)
    {
    for(int i = 0; i < 3; i++){
        if (invert_origen == 0)
        {
        destino[i] = origen[i][lado];    
        }else{
        origen[i][lado] = destino[i];
        }
    }
    }else{
        int a = 2;
    for(int i = 0; i < 3; i++){
        if (invert_origen == 0)
        {
        destino[a] = origen[i][lado];    
        }else{
        origen[a][lado] = destino[i];
        }
        a--;
    }
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
