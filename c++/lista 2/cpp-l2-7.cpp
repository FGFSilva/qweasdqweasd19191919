#include <iostream>
using namespace std;

int main() {
    double d1, d2, d3, dTotal;

    cout << "distancia do primeiro lancamento: " << endl;
    cin >> d1;
    cout << "distancia do segundo lancamento: " << endl;
    cin >> d2;
    cout << "distancia do terceiro lancamento: " << endl;
    cin >> d3;

    if (d1 > d2 && d1 > d3){
        dTotal = d1;
    }
    else if (d2 > d1 && d2 > d3){
        dTotal = d2;
    }
    else if (d3 > d1 && d3 > d2){
        dTotal = d3;
    }
    else {
        dTotal = d1;
    }

    cout << "maior distancia: " << dTotal << endl;

    return 0;
}