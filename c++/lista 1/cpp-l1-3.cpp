#include <iostream>
#include <string>
#include <climits>
#include <iomanip>
using namespace std;

int main(){
    string nome1,nome2;
    int idade1,idade2,idadeM;

    cout << "inserir nome da primeira pessoa" << endl;
    getline(cin,nome1);
    cout << "inserir idade da primeira pessoa" << endl;
    cin >> idade1;

    cout << "inserir nome da segunda pessoa" << endl;
    cin.ignore(INT_MAX, '\n');
    getline(cin,nome2);
    cout << "inserir idade da segunda pessoa" << endl;
    cin >> idade2;
    
    idadeM = (idade1 + idade2)/2;

    cout << fixed << setprecision(2);
    cout << "(usuario 1) nome = " << nome1 << "; " << "idade = "  << idade1 << "; " << "idade media = " << idadeM << endl;
    cout << "(usuario 2) nome = " << nome2 << "; " << "idade = "  << idade2 << "; " << "idade media = " << idadeM << endl;

    return 0;
}