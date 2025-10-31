#include <iostream>
using namespace std;

int main(){
    int i, maior, menor, vetor[15];

    cout << "Digite um numero: " << endl;
    cin >> vetor[0];

    maior = menor = vetor[0];

    for (i = 1; i < 15; i++){
        cout << "Digite um numero: " << endl;
        cin >> vetor[i];

        if (vetor[i] > maior){
            maior = vetor[i];
        }
        if (vetor[i] < menor){
            menor = vetor[i];
        }
    }

    cout << "O maior numero e: " << maior << " e o menor e: " << menor << end

    return 0;
}