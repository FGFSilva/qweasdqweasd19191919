#include <stdio.h>

int main(){
    int var1, i;
    int var2 = 0, var3 = 1, var4;

    printf("Digite quantidade elementos da sequencia de Fibonacci: ");
    scanf("%i", &var1);

    printf("Sequencia de Fibonacci:\n");

    for(i = 0; i < var1; i++){
        printf("%i ", var2);
        var4 = var2 + var3;
        var2 = var3;
        var3 = var4;
    }

    return 0;
}