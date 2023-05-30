#include <stdio.h>
#include <math.h>
#include "funciones.h"

int main (int argc, char *argv[]) {

    float puntos[4][3];
    for (int i = 0; i < 4; i++)
    {
        puntos[i][0]=ingresarComponente('X',i);
        puntos[i][1]=ingresarComponente('Y',i);
        puntos[i][2]=ingresarComponente('Z',i);
    }
    float d = ingresarProfundidad();
    calcularAreaSuperficial(puntos,d);
    calcularVolumen(puntos,d);

    return 0;
}
