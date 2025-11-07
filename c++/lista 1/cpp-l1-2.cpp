#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
#include <cmath>
using namespace std;

int main(){
    double base, altura, area, perimetro, diagonal;

    cout << "inserir o valor da base do retangulo" << endl;
    cin >> base;
    cout << "inserir o valor da altura do retangulo" << endl;
    cin >> altura;

    area = base * altura;
    perimetro = 2 * (base + altura);
    diagonal =  sqrt(base*base+altura*altura);

    cout << fixed << setprecision(4);
    cout << "area do retangulo = " << area << endl;
    cout << "perimetro do retangulo = " << perimetro << endl;
    cout << "diagonal do retangulo = " << diagonal << endl;

    return 0;
}