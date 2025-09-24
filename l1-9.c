#include <stdio.h>

int main(){
    double A, B, C, aSqr, aTri, aTrap;

    printf("\nValor de A: ");
    scanf("%lf",&A);

    printf("\nValor de B: ");
    scanf("%lf",&B);

    printf("\nValor de C: ");
    scanf("%lf",&C);

    aSqr = A*A;
    aTri = (A*B)/2;
    aTrap = ((A+B)*C)/2;

    printf("\n\nArea do quadrado: %.4f\n",aSqr);
    printf("Area do triangulo retangulo: %.4f\n",aTri);
    printf("Area do trapezio: %.4f\n",aTrap);

    return 0;
}