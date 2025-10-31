#include <iostream>
using namespace std;

int main(){
    double preco, dinheiro, troco;
    int qtd;
    
    cout << "inserir preco unitario do produto" << endl;
    cin >> preco;
    cout << "inserir quantidade comprada" << endl;
    cin >> qtd;
    cout << "inserir dinheiro recebido" << endl;
    cin >> dinheiro;

    troco = dinheiro - (preco * qtd);

    if (troco < 0){
        troco=(-troco);
        cout << "falta R$ " << troco << " para a compra" << endl;
    }
    else{
        cout << "troco: R$ " << troco << endl;
        printf("TROCO = R$ %.2lf\n", troco);
    }
    return 0;
}