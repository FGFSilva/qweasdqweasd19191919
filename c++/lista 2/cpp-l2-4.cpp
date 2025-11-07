#include <iostream>
using namespace std;

int main()
{
    double valor;
    int minutos;

    cout << "inserir a quantidade de minutos consumida" << endl;
    cin >> minutos;

    if (minutos <= 100){
        cout << "O valor da conta e R$ 50.00" << endl;
    }
    else{
        valor = (minutos - 100) * 2.00 + 50;
        cout << "O valor da conta e R$ " << valor << endl;
    }
    return 0;
}