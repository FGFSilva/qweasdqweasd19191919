#include <stdio.h>

int main ()
{
    int dest, volta;
    double preco, p2;

    printf("Qual Cidade e o destino? (1 - morros / 2 - Barreirinhas / 3 - Bacabeira / 4- Rosario): ");
    scanf("%d", &dest);

    printf("Compra e de Ida e Volta? (1 - Sim / 0 - Nao): ");
    scanf("%d", &volta);

    switch (dest)
    {
        case 1:
            preco = 120;
        break;
        case 2:
            preco = 200;
        break;
        case 3:
            preco = 50;
        break;
        case 4:
            preco = 80;
        break;
        default:
            printf("\nCidade invalida");
    }

    if (volta == 1){
        p2 = preco*2;
        preco = (p2-(p2*0.1));
    }

    printf("\nTotal: %.2lf", preco);

    return 0;
}
