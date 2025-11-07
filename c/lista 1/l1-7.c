#include <stdio.h>

int main(){
    char nome[50];
    double valHr, hrTrb, pag;

    printf("Nome do(a) funcionario(a): ");
    scanf("%s",nome);

    printf("Valor Recebido por hora: ");
    scanf("%lf",&valHr);

    printf("Quantidade de horas trabalhadas: ");
    scanf("%lf",&hrTrb);

    pag = valHr*hrTrb;

    printf("\nFuncionario(a): %s\nPagamento: R$ %.2f\n",nome,pag);

    return 0;
}