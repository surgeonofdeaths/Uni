#include <iostream>
#include <random>

using namespace std;

int main() {
    const int size = 6;
    int sumEven = 0, sumOdd = 0;
    int a[size][size], i = 0, j = 0;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            a[i][j] = rand() % 100; 
        }
    }

    for (int i = 0; i < size; i++) {
        // Сума парних елементів головної діагоналі
        if (a[i][i] % 2 == 0) {
            sumEven += a[i][i];
        }

        // Сума непарних елементів бічної діагоналі
        if (a[i][size - 1 - i] % 2 != 0) {
            sumOdd += a[i][size - 1 - i];
        }
    }
    
    // Output matrix
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "sum of evens: " << sumEven << endl;
    cout << "sum of odds: " << sumOdd << endl;
    return 0;
}
