#include <stdio.h>

int main(){
    double r, area, pi = 3.14159;

    printf("\nDigite o valor do raio: ");
    scanf("%lf", &r);

    area = pi*(r*r);

    printf("\n\nA area do circulo e: %.3lf\n", area);

    return 0;
}