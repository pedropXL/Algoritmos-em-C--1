#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Digite dois numeros:" << endl;
    cin >> x;
    cin >> y;
    while (x!=y)
    {
        if (x>y)
        {
            cout << "DECRESCENTE!";
        }
        else
        {
            cout << "CRESCENTE!";
        }

        cout << endl;
        cout << "Digite outros dois numeros:" << endl;
        cin >> x;
        cin >> y;
    }
    return 0;
}