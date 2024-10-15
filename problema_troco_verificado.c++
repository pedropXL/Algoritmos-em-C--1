#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    double preco, preco1, dinheiro, troco;
    int quantidade;
    cout << "Preço unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;
    preco1=preco*quantidade;
    if (dinheiro<preco1)
    {
        cout << fixed << setprecision(2);
        cout << "DINHEIRO INSUFICIENTE. FALTAM " << abs(preco1-dinheiro) << " REAIS";
    }
    else
    {
        troco=dinheiro-preco1;
        cout << fixed << setprecision(2);
        cout << "TROCO = " << troco;
    }
    return 0;
}
