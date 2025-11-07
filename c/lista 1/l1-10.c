#include <stdio.h>

int main(){
    int totSecs, hour, min, secs;

    printf("\nDigite o tempo em segundos: ");
    scanf("%d",&totSecs);

    hour = totSecs / 3600;
    min = (totSecs % 3600) / 60;
    secs = totSecs % 60;

    printf("\n\nHora total: %d:%d:%d\n",hour,min,secs);

    return 0;
}