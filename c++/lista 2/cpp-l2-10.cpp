#include <iostream>
using namespace std;

int main(){
    int n1, n2;

    cout << "Digite o primeiro numero: " << endl;
    cin >> n1;

    cout << "Digite o segundo numero: " << endl;
    cin >> n2;

    if (n1 % n2 == 0){
        cout << n1 << " e multiplo de " << n2 << endl;
    }
    else if (n2 % n1 == 0){
        cout << n2 << " e multiplo de " << n1 << endl;
    }
    else{
        cout << "Nenhum numero e multiplo" << endl;
    }

    return 0;
}