#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

int main(){
    double A, B, C, aSqr, aTri, aTrap;

    cout << "inserir valor de A" << endl;
    cin >> A;
    cout << "inserir valor de B" << endl;
    cin >> B;
    cout << "inserir valor de C" << endl;
    cin >> C;
    
    aSqr = A*A;
    aTri = (A*B)/2;
    aTrap = ((A+B)*C)/2;

    cout << fixed << setprecision(4);
    cout << "area do quadrado = " << aSqr << endl;
    cout << "area do triangulo retangulo = " << aTri << endl;
    cout << "area do trapezio = " << aTrap << endl;

    return 0;
}