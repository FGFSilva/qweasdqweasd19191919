#include <stdio.h>

int main ()
{
    int val;

    printf("Digite a nota do aluno (entre 1 a 5): ");
    scanf("%d", &val);

    switch (val)
    {
        case 1:
            printf("Pessimo");
        break;
        case 2:
            printf("Ruim");
        break;
        case 3:
            printf("Bom");
        break;
        case 4:
            printf("Muito bom");
        break;
        case 5:
            printf("Excelente");
        break;
        default:
            printf("Nota invalida");
    }
    return 0;
}
