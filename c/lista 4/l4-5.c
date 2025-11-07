#include <stdio.h>

int main()
{
    int vinho;

    printf("Digite o codigo do Vinho (Minimo de 1): ");
    scanf("%d", &vinho);

    if (vinho > 0){
        switch (vinho)
        {
            case 1:
                printf("\nDe mesa");
            break;
            case 2:
                printf("\nDe mesa");
            break;
            case 3:
                printf("\nDe mesa");
            break;
            case 4:
                printf("\nTinto");
            break;
            case 5:
                printf("\nBranco seco");
            break;
            case 6:
                printf("\nBranco doce");
            break;
            case 7:
                printf("\nBranco doce");
            break;
            case 8:
                printf("\nRose");
            break;
            case 9:
                printf("\nEspumante");
            break;
            default:
                printf("\nFortificado");
        }
    }
    else if (vinho <= 0){
        printf("\nCodigo invalido");
    }

    return 0;
}
