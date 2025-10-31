#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a, b, c, delta, x1, x2;

    cout << "inserir o valor de A" << endl;
    cin >> a;
    cout << "inserir o valor de B" << endl;
    cin >> b;
    cout << "inserir o valor de C" << endl;
    cin >> c;

    delta = b * b - 4 * a * c;

    if (delta < 0){
        cout << "Nao existe raizes reais" << endl;
    }
    else if (delta == 0){
        x1 = -b / (2 * a);
        cout << "Raiz unica: " << x1 << endl;
    }
    else{
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        cout << "Raiz distintas: " << x1 << "e " << x2 << endl;
    }

    return 0;
}