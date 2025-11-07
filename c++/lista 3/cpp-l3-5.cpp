#include <iostream>
using namespace std;

int main(){
    int vetor[10];
    int i, num, encontrado = 0;

    for (i = 0; i < 10; i++){
        cout << "Digite um numero: " << endl;
        cin >> vetor[i];
    }

    cout << "Digite o numero que deseja buscar: " << endl;
    cin >> num;

    for (i = 0; i < 10; i++){
        if (vetor[i] == num){
            encontrado = 1;
            break;
        }
    }

    if (encontrado == 1){
        cout << "O numero " << num << " esta presente no vetor." << endl;
    }
    else{
        cout << "O numero " << num << " nao foi encontrado no vetor." << endl;
    }

    return 0;
}