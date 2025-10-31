#include <iostream>
using namespace std;

int main(){
    int vetor[10], inverso[10];
    int i;

    for (i = 0; i < 10; i++){
        cout << "Digite um numero: " << endl;
        cin >> vetor[i];
    }

    for (i = 0; i < 10; i++){
        inverso[i] = vetor[9 - i];
    }

    cout << "Vetor na ordem inversa: ";
    for (i = 0; i < 10; i++){
        cout << inverso[i] << " " << endl;
    }
    cout << endl;

    return 0;
}