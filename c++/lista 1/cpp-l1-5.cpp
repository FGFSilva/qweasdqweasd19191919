#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

int main(){
    double preco, dinheiro, troco;
    int qtd;

    cout << "valor do produto" << endl;
    cin >> preco;
    cout << "quantidade que foi comprada" << endl;
    cin >> qtd;
    cout << "dinheiro que foi recebido" << endl;
    cin >> dinheiro;

    troco = dinheiro - (preco * qtd);

    cout << "valor do troco = " << troco << endl;

    return 0;
}