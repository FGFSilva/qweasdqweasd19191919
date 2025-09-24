#include <stdio.h>

int main(){
    int vetor1[5], vetor2[5], vetor3[10];
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
        vetor3[var1] = vetor1[i];
        vetor3[var1 + 1] = vetor2[i];
        var1 += 2;
    }

    
    printf("Vetor intercalado:\n");
    for(i = 0; i < 10; i++){
        printf("%i ", vetor3[i]);
    }

    return 0;
}
