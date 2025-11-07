#include <iostream>
using namespace std;

int main() {
    double C, F;

    cout << "Converter Fahrenheit para Celsius" << endl;
    cout << "Valor de Fahrenheit: ";
    cin >> F;

    C = (5 * (F - 32)) / 9;

    cout << endl << "Valor de Celsius é: " << C << endl;

    return 0;
}
