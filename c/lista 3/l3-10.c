#include <stdio.h>

int main(){
    int vetor1[5], vetor2[5];
    int i, var1 = 0;

    for(i = 0; i < 5; i++){
        printf("Digite um numero do primeiro vetor (max 5): ");
        scanf("%i", &vetor1[i]);
    }

    for(i = 0; i < 5; i++){
        printf("Digite um numero do segundo vetor (max 5): ");
        scanf("%i", &vetor2[i]);
    }

    
    for(i = 0; i < 5; i++){
        var1 += vetor1[i] * vetor2[i];
    }

    printf("Produto escalar: %i", var1);

    return 0;
}
