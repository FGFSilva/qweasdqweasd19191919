#include <stdio.h>

int main(){
    double id, prec, quant, total;

    printf("ID dos produtos e o numero do produto 'ex: Produto 1 = 1':\n\nValor do ID 'de 1 a 5': ");
    scanf("%lf",&id);

    if (id == 1){
        prec = 5;
    }
    else if (id == 2){
        prec = 3.5;
    }
    else if (id == 3){
        prec = 4.8;
    }
    else if (id == 4){
        prec = 8.9;
    }
    else if (id == 5){
        prec = 7.32;
    }
    else{
        printf("\n\nID Invalido");
    }

    if (id > 0 && id <= 5){
        printf("\n\nQuantidade do produto: ");
        scanf("%lf",&quant);

        total = prec*quant;

        printf("\n\nValor a ser pago: %.2lf",total);
    }
    
    return 0;
}