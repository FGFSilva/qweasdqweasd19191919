#include <iostream>
using namespace std;

int main(){
    int i, soma, vetor[10];
    soma = 0;

    for (i = 0; i < 10; i++){
        cout << "Digite um numero: " << endl;
        cin >> vetor[i];

        soma = soma + vetor[i];
    }

    cout << "A soma obtida foi: " << soma << endl;
    
    return 0;
}