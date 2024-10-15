#include <iostream>

using namespace std;

int main()
{
    int i, j, n, negativos;
    cout << "Qual a ordem da matriz? ";
    cin >> n;
    int mat[n][n];
    negativos=0;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
          cout << "Elemento [" << i << "," << j << "]: ";
          cin >> mat[i][j];
          if (mat[i][j]<0) {
            negativos=negativos+1;
          }
        }
    }
    cout << "DIAGONAL PRINCIPAL:" << endl;
    for (i=0; i<n; i++) {
        for (j=0; j<n; j++) {
            if (i==j) {
                cout << mat[i][j] << " ";
            }
        }
    }
    cout << endl;
    cout << "QUANTIDADE DE NEGATIVOS = " << negativos;
    return 0;
}
