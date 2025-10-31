#include <iostream>
using namespace std;

int main(){
    int n, i;
    long long fatorial = 1;

    cout << "Digite um numero inteiro: " << endl;
    cin >> n;

    if (n < 0){
        cout << "Fatorial nao definido para numeros negativos." << endl;
    }
    else{
        for (i = 1; i <= n; i++){
            fatorial = fatorial * i;
        }
        cout << "O fatorial de " << n << " e: " << fatorial << endl;
    }

    return 0;
}
