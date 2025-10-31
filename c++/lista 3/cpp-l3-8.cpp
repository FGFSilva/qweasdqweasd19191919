#include <iostream>
using namespace std;

int main(){
    int n, i;
    int fib[100];

    cout << "Digite quantos elementos da sequencia de Fibonacci deseja: " << endl;
    cin >> n;

    if (n <= 0){
        cout << "Numero invalido." << endl;
    }
    else {
        fib[0] = 0;
        if (n > 1){
            fib[1] = 1;
        }

        for (i = 2; i < n; i++){
            fib[i] = fib[i-1] + fib[i-2];
        }

        cout << "Sequencia de Fibonacci: ";
        for (i = 0; i < n; i++){
            cout << fib[i] << endl;
        }
        cout << endl;
    }

    return 0;
}