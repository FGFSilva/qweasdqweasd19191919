#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

int main(){
    double larg,comp,area,valorm2,preco;

    cout << "inserir o valor do comprimento" << endl;
    cin >> comp;
    cout << "inserir o valor da largura" << endl;
    cin >> larg;

    area = comp * larg;

    cout << "inserir valor do metro quadrado" << endl;
    cin >> valorm2;

    preco = area * valorm2;

    cout << fixed << setprecision(2);
    cout << "area do terreno = " << area << endl;
    cout << "preco do terreno = " << preco << endl;

    return 0;
}