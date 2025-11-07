#include <iostream>
using namespace std;

int main(){
    double nota1, nota2, media;
    
    cout << "Digite a primeira nota: " << endl;
    cin >> nota1;
    cout << "Digite a segunda nota: " << endl;
    cin >> nota2;
    
    media = (nota1 + nota2) / 2;
    
    if (media < 6.0){
        cout << "O aluno esta REPROVADO com media: " << media << endl;
    }
    else{
        cout << "O aluno esta APROVADO com media: " << media << endl;
    }
    return 0;
}