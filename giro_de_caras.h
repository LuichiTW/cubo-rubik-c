#include <stdio.h>
#include <stdlib.h>


enum caras {ATRAS, ARRIBA, IZQUIERDA, FRENTE, DERECHA, ABAJO};
enum lado {L_IZQUIERDA, L_DERECHA = 2};
enum altura {SUPERIOR, INFERIOR = 2};

extern int cubo_rubik[6][3][3];

//giro de caras
void girar_cara(int cara, int matriz[6][3][3]);

//giro sentido horario
void invertirMatriz(int matriz[3][3]);

//auxiliares
void copiar_array_fila(int origen[3], int destino[3], int invert_lista);
void copiar_columna_columna(int matriz_origen[3][3], int matriz_destino[3][3], int lado, int invert_lista);
void copiar_array_columna(int origen[3][3], int lado, int invert_origen, int invert_lista, int destino[3]);