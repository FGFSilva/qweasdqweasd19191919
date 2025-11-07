#include <stdio.h>

int main()
{
    int tempo;

    printf("Digite em anos o tempo de servico do programador (Minimo de 1): ");
    scanf("%d", &tempo);

    if (tempo > 0){
        switch (tempo)
        {
            case 1:
                printf("\nJunior");
            break;
            case 2:
                printf("\nJunior");
            break;
            case 3:
                printf("\nPleno A");
            break;
            case 4:
                printf("\nPleno A");
            break;
            case 5:
                printf("\nPleno A");
            break;
            case 6:
                printf("\nPleno B");
            break;
            default:
                printf("\nSenior");
        }
    }
    else if (tempo <= 0){
        printf("\nTempo invalido");
    }

    return 0;
}
