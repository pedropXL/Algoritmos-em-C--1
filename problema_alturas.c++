#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std;

int main()
{
    int i, n, menor;
    double soma, media, porcentagem;
    cout << "Quantas pessoas serao digitadas? ";
    cin >> n;
    string nome[n];
    int idade[n];
    double altura[n];

    soma=0;
    menor=0;
    for (i=0; i<n; i++)
    {
        cout << "Dados da " << i+1 << "a pessoa:" << endl;
        cout << "Nome: ";
        cin.ignore(INT_MAX, '\n');
        getline(cin, nome[i]);
        cout << "Idade: ";
        cin >> idade[i];
        cout << "Altura: ";
        cin >> altura[i];
        soma=soma+altura[i];
        if (idade[i]<16)
        {
            menor=menor+1;
        }
    }
    media=soma/n;
    cout << fixed << setprecision(2);
    cout << "Altura media: " << media << endl;
    porcentagem=(100/n)*menor;
    cout << fixed << setprecision(2);
    cout << "Pessoas com menos de 16 anos: " << porcentagem << "%" << endl;
    for (i=0; i<n; i++)
    {
        if (idade[i]<16)
        {
            cout << nome[i] << endl;
        }
    }

    return 0;
}
