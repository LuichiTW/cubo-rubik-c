#include <stdio.h>
#include <stdlib.h>


enum caras {ATRAS, ARRIBA, IZQUIERDA, FRENTE, DERECHA, ABAJO};

extern int cubo_rubik[6][3][3];

//giro de caras
void girar_cara(int cara, int matriz[6][3][3]);
//giro sentido horario
void invertirMatriz(int matriz[3][3]);
void actualizar_caras(int tipo, int nivel, int cara1[3][3], int cara2[3][3], int cara3[3][3], int cara4[3][3]);