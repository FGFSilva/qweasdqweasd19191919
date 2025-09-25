#include <stdio.h>

int main ()
{
    int tipo;
    double preco, p2;

    printf("Qual vai ser o total da compra? (EX: 32): ");
    scanf("%lf", &preco);

    printf("Qual o tipo de comprador? (1 - Visitante / 2 - Aluno / 3 - Servidor): ");
    scanf("%d", &tipo);

    if (tipo == 2){
        p2 = preco*0.05;
    }
    else if (tipo == 3){
        p2 = preco*0.1;
    }

    switch (tipo)
    {
        case 1:
            preco += 0;
        break;
        case 2:
            preco -= p2;
        break;
        case 3:
            preco -= p2;
        break;
        default:
            printf("\nID invalido");
    }

    printf("\nTotal a ser pago: %.2lf", preco);

    return 0;
}
