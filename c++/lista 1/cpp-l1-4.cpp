#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

int main(){
    double x,y,soma;

    cout << "inserir o valor de x" << endl;
    cin >> x;
    cout << "inserir o valor de y" << endl;
    cin >> y;

    soma = x + y;

    cout << "soma dos numeros = " << soma << endl;

    return 0;
}