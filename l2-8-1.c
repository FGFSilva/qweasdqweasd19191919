#include <stdio.h>

int main(){
    double C,F;

    printf("Converter Fahrenheit para Celsius\n\nValor de Fahrenheit: ");
    scanf("%lf",&F);

    C = (5*(F-32))/9;

    printf("\n\nValor de Celsius é: %lf",C);

    return 0;
}