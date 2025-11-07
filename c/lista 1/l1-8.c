#include <stdio.h>

int main(){
    double dist, comb, cons;

    printf("Distancia total percorrida em km: ");
    scanf("%lf",&dist);

    printf("Total de combustivel gasto em litros: ");
    scanf("%lf",&comb);

    cons = dist/comb;

    printf("Consumo medio do carro foi: %.3f km/l\n",cons);

    return 0;
}