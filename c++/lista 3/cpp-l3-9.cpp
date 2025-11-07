#include <iostream>
using namespace std;

int main(){
    int vetor1[5], vetor2[5], vetor3[10];
    int i, var1 = 0;

    for(i = 0; i < 5; i++){
        cout << "Digite um numero do primeiro vetor (max 5): " << endl;
        cin >> vetor1[i];
    }

    for(i = 0; i < 5; i++){
        cout << "Digite um numero do segundo vetor (max 5): " << endl;
        cin >> vetor2[i];
    }

    
    for(i = 0; i < 5; i++){
        vetor3[var1] = vetor1[i];
        vetor3[var1 + 1] = vetor2[i];
        var1 += 2;
    }

    
    cout << "Vetor intercalado: " << endl;
    for(i = 0; i < 10; i++){
        cout << vetor3[i] << endl;
    }

    return 0;
}