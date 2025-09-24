#include <stdio.h>

int main(){
    double C,F;

    printf("Converter Celsius para Fahrenheit\n\nValor de Celsius: ");
    scanf("%lf",&C);

    F = ((C*9)/5)+32;

    printf("\n\nValor de Fahrenheit é: %lf",F);

    return 0;
}