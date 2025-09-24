#include <stdio.h>

int main(){
    int var1, i;
    int var2 = 1; // var2 será o resultado do fatorial

    printf("Digite um numero: ");
    scanf("%i", &var1);

    for(i = var1; i > 1; i--){
        var2 *= i;
    }

    printf("Fatorial de %i: %i", var1, var2);

    return 0;
}