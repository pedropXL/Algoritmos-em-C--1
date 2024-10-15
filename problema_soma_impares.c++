#include <iostream>

using namespace std;

int main()
{
    int x, y, soma, z, i;
    cout << "Digite dois numeros:" << endl;
    cin >> x;
    cin >> y;

    if (x>y) {
        z=x;
        x=y;
        y=z;
    }
    soma=0;
    for (i=x+1; i<y; i++) {
        if (i%2!=0) {
            soma=soma+i;
        }
    }
    cout << "SOMA DOS IMPARES = " << soma;
    return 0;
}