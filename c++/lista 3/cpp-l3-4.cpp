#include <iostream>
using namespace std;

int main(){
    int vetor[20];
    int i, pares = 0, impares = 0;

    for (i = 0; i < 20; i++){
        cout << "Digite um numero: " << endl;
        cin >> vetor[i];

        if (vetor[i] % 2 == 0){
            pares = pares + 1;
        } else {
            impares = impares + 1;
        }
    }

    cout << "Quantidade de numeros pares: " << pares << endl;
    cout << "Quantidade de numeros impares: " << impares << endl;

    return 0;
}
