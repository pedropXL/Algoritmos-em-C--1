#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int minutos;
    double valor;
    cout << "Digite a quantidade de minutos: ";
    cin >> minutos;
    if (minutos<=100)
    {
        valor=50;
    }
    else
    {
        valor=50+2*(minutos-100);
    }
    cout << fixed << setprecision(2);
    cout << "Valor a pagar: R$ " << valor;
    return 0;
}
