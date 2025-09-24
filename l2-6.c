#include <stdio.h>
int main(){
    double glic;
    
    printf("\nQuantidade de Glicose: ");
    scanf("%lf",&glic);

    if (glic <= 100){
        printf("\nNivel de Glicose: Normal\n\n");
    }
    else if (glic > 100 && glic <= 140){
        printf("\nNivel de Glocose: Elevado\n\n");
    }
    else if (glic > 140){
        printf("\nNivel de Glocose: Diabetes\n\n");
    }

    return 0;
}