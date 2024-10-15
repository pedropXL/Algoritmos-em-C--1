#include <iostream>

using namespace std;

int main()
{
    int i, n;
    cout << "Quantos numeros voce vai digitar? ";
    cin >> n;
    int vet[n];
    for (i=0; i<n; i++)
    {
        cout << "Digite um numero: ";
        cin >> vet[i];
    }
    cout << "NUMEROS NEGATIVOS:" << endl;
    for (i=0; i<n; i++)
    {
        if (vet[i]<0)
        {
            cout << vet[i] << endl;
        }
    }

    return 0;
}