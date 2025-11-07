#include <iostream>
using namespace std;

int main(){
    double vetor[8], soma = 0, media;
    int i;

    for (i = 0; i < 8; i++){
        cout << "Digite um numero real: " << endl;
        cin >> vetor[i];
        soma = soma + vetor[i];
    }

    media = soma / 8;

    cout << "A media dos numeros digitados e: " << media << endl;

    return 0;
}
