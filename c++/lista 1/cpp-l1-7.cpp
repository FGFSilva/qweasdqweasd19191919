#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

int main(){
    string nome;
    double valHr, hrTrb, pag;

    cout << "inserir nome da pessoa" << endl;
    getline(cin,nome);
    cout << "inserir valor recebido por hora" << endl;
    cin >> valHr;
    cout << "inserir quantidade de horas trabalhadas" << endl;
    cin >> hrTrb;
    
    pag = valHr + hrTrb;

    cout << fixed << setprecision(2);
    cout << "nome do usuario = " << nome << "; " << "pagamento = "  << pag << endl;

    return 0;
}