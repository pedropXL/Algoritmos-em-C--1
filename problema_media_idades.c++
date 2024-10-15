#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int x, soma, quantidade;
    double media;
    cout << "Digite as idades:" << endl;
    cin >> x;
    soma=0;
    quantidade=0;
    while (x>=0)
    {
        soma=soma+x;
        quantidade=quantidade+1;
        cin >> x;
    }
    if (quantidade==0)
    {
        cout << "IMPOSSIVEL CALCULAR";
    }
    else
    {
        media=(double)soma/quantidade;
        cout << fixed << setprecision(2);
        cout << "MEDIA = " << media;
    }
    return 0;
}