#include <iostream>
using namespace std;

int main(){
    double id, prec, quant, total;

    cout << "ID dos produtos e o numero do produto 'ex: Produto 1 = 1':" << endl;
    cout << "Valor do ID 'de 1 a 5': ";
    cin >> id;

    if (id == 1){
        prec = 5;
    }
    else if (id == 2){
        prec = 3.5;
    }
    else if (id == 3){
        prec = 4.8;
    }
    else if (id == 4){
        prec = 8.9;
    }
    else if (id == 5){
        prec = 7.32;
    }
    else{
        cout << endl << endl << "ID Invalido" << endl;
    }

    if (id > 0 && id <= 5){
        cout << endl << endl << "Quantidade do produto: ";
        cin >> quant;

        total = prec * quant;

        cout << endl << endl << "Valor a ser pago: " << total << endl;
    }

    return 0;
}