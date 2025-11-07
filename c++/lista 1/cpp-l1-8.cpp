#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

int main(){
    double dist, comb, cons;

    cout << "inserir distancia total percorrida em km" << endl;
    cin >> dist;
    cout << "inserir quantidade de combustivel gasto em litros" << endl;
    cin >> comb;
    
    cons = dist/comb;

    cout << fixed << setprecision(3);
    cout << "Consumo medio do carro = " << cons << " Km/L" << endl;

    return 0;
}