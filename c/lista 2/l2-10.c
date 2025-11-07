#include <stdio.h>

int main(){
    int n1, n2;

    printf("Digite o primeiro numero: ");
    scanf("%d",&n1);

    printf("Digite o segundo numero: ");
    scanf("%d",&n2);

    if (n1 % n2 == 0){
        printf("%d e multiplo de %d\n", n1, n2);
    }
    else if (n2 % n1 == 0){
        printf("%d e multiplo de %d\n",n2,n1);
    }
    else{
        printf("Nenhum numero e multiplo\n");
    }

    return 0;
}