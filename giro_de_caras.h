#include <stdio.h>
#include <stdlib.h>


enum caras {ATRAS, ARRIBA, IZQUIERDA, FRENTE, DERECHA, ABAJO};

extern int cubo_rubik[6][3][3];

//giro de caras
//giro sentido horario
void invertirMatriz(int matriz[3][3]);
