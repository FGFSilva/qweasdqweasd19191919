#include <iostream>
using namespace std;

int main() {
    double C, F;

    cout << "Converter Celsius para Fahrenheit" << endl << endl;
    cout << "Valor de Celsius: ";
    cin >> C;

    F = ((C * 9) / 5) + 32;

    cout << endl << "Valor de Fahrenheit é: " << F << endl;

    return 0;
}
