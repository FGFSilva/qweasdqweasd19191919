#include <iostream>
using namespace std;

int main() {
    double glic;

    cout << "Quantidade de Glicose: " << endl;
    cin >> glic;

    if (glic <= 100) {
        cout << "Nivel de Glicose: Normal" << endl;
    }
    else if (glic > 100 && glic <= 140) {
        cout << "Nivel de Glicose: Elevado" << endl;
    }
    else if (glic > 140) {
        cout << "Nivel de Glicose: Diabetes" << endl;
    }

    return 0;
}