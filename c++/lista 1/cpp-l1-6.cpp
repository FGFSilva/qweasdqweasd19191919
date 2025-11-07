#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

int main(){
    double r, area, pi = 3.14159;

    cout << "valor do raio" << endl;
    cin >> r;

    area = pi * (r * r);

    cout << "area do circulo = " << area << endl;

    return 0;
}