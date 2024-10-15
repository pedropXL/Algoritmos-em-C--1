#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double c, f;
    char temperatura;
    cout << "Voce vai digitar a temperatura em qual escala (C/F)? ";
    cin >> temperatura;
    if (temperatura=='F') {
        cout << "Digite a temperatura em Fahrenheit: ";
        cin >> f;
        c=0.55555*(f-32);
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em Celsius: " << c;
    }
    else {
        cout << "Digite a temperatura em Celsius: ";
        cin >> c;
        f=c*1.8+32;
        cout << fixed << setprecision(2);
        cout << "Temperatura equivalente em Fahrenheit: " << f;
    }
    return 0;
}
