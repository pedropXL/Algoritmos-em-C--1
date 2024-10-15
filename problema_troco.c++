#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double preco, dinheiro, troco;
    int quantidade;
    cout << "Preço unitario do produto: ";
    cin >> preco;
    cout << "Quantidade comprada: ";
    cin >> quantidade;
    cout << "Dinheiro recebido: ";
    cin >> dinheiro;
    troco=dinheiro-(preco*quantidade);
    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco;
    return 0;
}
