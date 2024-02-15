#include <iostream>
using namespace std;

int calculateNonZeroItems(int a[][4], int n, int m) {
    int nonzero = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] != 0) {
                nonzero++;
            }
        }
    }
    return nonzero;
}

int main() {
    const int n = 6;
    const int m = 4;
    int a[n][m];
    int nonzero = 0;


    cout << "Введіть елементи матриці " << n << "x" << m << ":\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << "a[" << i << "][" << j << "]: ";
            cin >> a[i][j];
        }
    }
    nonzero = calculateNonZeroItems(a, n, m);
    cout << "Кількість ненульових елементів у матриці: " << nonzero << endl;

    return 0;
}