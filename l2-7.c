#include <stdio.h>
int main(){
    double d1,d2,d3,dTotal;
    
    printf("\nDistancia do primeiro lancamento: ");
    scanf("%lf",&d1);

    printf("Distancia do segundo lancamento: ");
    scanf("%lf",&d2);

    printf("Distancia do terceiro lancamento: ");
    scanf("%lf",&d3);

    if (d1 > d2 && d1 > d3){
        dTotal = d1;
    }
    else if (d2 > d1 && d2 > d3){
        dTotal = d2;
    }
    else if (d3 > d1 && d3 > d1){
        dTotal = d3;
    }
    else{
        dTotal = d1;
    }

    printf("\nMaior Distancia: %lf\n\n",dTotal);

    return 0;
}