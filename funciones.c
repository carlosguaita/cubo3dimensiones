#include <stdio.h>
#include <math.h>
#include "funciones.h"

float ingresarComponente(char componente, int i){
    float a;
    printf("Ingrese la componente %c del punto %d: ",componente,i);
    scanf("%f",&a);
    return a;
}

float ingresarProfundidad(){
    float a;
    printf("Ingrese la profundidad del cubo: ");
    scanf("%f",&a);
    return a;
}

float calcularDistancia(float x1, float y1, float z1, float x2, float y2, float z2){
    float dist = sqrt(pow(x1-x2,2)+pow(y1-y2,2)+pow(z1-z2,2));
    return dist;
}

float calcularArea(float base, float altura){
    float area = base*altura;
    return area;
}

void calcularAreaSuperficial(float puntos[4][3], float prof){

    float d1 = calcularDistancia(puntos[0][0],puntos[0][1],puntos[0][2],puntos[1][0],puntos[1][1],puntos[1][2]);
    float d2 = calcularDistancia(puntos[0][0],puntos[0][1],puntos[0][2],puntos[3][0],puntos[3][1],puntos[3][2]);
    float d3 = calcularDistancia(puntos[1][0],puntos[1][1],puntos[1][2],puntos[2][0],puntos[2][1],puntos[2][2]);
    float d4 = calcularDistancia(puntos[2][0],puntos[2][1],puntos[2][2],puntos[3][0],puntos[3][1],puntos[3][2]);

    if (d1==d4 && d2==d3)
    {
        float area1 = calcularArea(d1,d2);
        float area2 = calcularArea(d1,prof);
        float area3 = calcularArea(d2,prof);
        float areaSuperficial=(area1+area2+area3)*2;
        printf("El area superficial es %f: ",areaSuperficial);
    }else
    {
       printf("No es un rectangulo");

    }
}

void calcularVolumen(float puntos[4][3], float prof){
    float d1 = calcularDistancia(puntos[0][0],puntos[0][1],puntos[0][2],puntos[1][0],puntos[1][1],puntos[1][2]);
    float d2 = calcularDistancia(puntos[0][0],puntos[0][1],puntos[0][2],puntos[3][0],puntos[3][1],puntos[3][2]);
    float d3 = calcularDistancia(puntos[1][0],puntos[1][1],puntos[1][2],puntos[2][0],puntos[2][1],puntos[2][2]);
    float d4 = calcularDistancia(puntos[2][0],puntos[2][1],puntos[2][2],puntos[3][0],puntos[3][1],puntos[3][2]);

    if (d1==d4 && d2==d3)
    {
        float volumen = d1*d2*prof;
        printf("El volumen es %f: ",volumen);
    }else
    {
       printf("No es un triangulo");
    }
}
