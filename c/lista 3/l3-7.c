#include <stdio.h>

int main(){
    int vetor1[10], vetor2[10];
    int i, var1;

    // Leitura dos 10 números
    for(i = 0; i < 10; i++){
        printf("Digite 10 numeros: ");
        scanf("%i", &vetor1[i]);
    }

    // Inversão dos elementos
    for(i = 0; i < 10; i++){
        vetor2[i] = vetor1[9 - i];
    }

    // Exibindo o vetor invertido
    printf("Vetor invertido:\n");
    for(i = 0; i < 10; i++){
        printf("%i ", vetor2[i]);
    }

    return 0;
}