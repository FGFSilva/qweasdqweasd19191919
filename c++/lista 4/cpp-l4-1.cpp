#include <iostream>
using namespace std;

int main()
{
    int i, j, m[3][3], soma;
    soma = 0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << "Digite o elemento da linha e da coluna da matriz (matriz 3x3, nenhum num. negativo): " << endl;
            cin >> m[i][j];
            soma += m[i][j];
        }
    }
    cout << "A soma dos elementos da matriz digitada foi: " << soma << endl;
    return 0;
}