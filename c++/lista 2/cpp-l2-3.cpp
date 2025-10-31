#include <iostream>
using namespace std;

int main(){
    int x, y, z;

    cout << "inserir 3 numeros inteiros" << endl;
    cin >> x;
    cin >> y;
    cin >> z;

    if (x < y && x < z){
        cout << "O menor numero e:" << x << endl;
    }
    else if (y < z){
        cout << "O menor numero e:" << y << endl;
    }
    else{
        cout << "O menor numero e:" << z << endl;
    }
    return 0;
}