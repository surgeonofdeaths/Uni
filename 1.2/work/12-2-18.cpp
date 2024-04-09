#include <iostream>
#include <vector>
#include <cstdlib> 

using namespace std;


int main() {
    const int rows = 5, cols = 6;
    int a[rows][cols];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            a[i][j] = rand() % 100; // pseudo random number
        }
    }

    int maxElement = a[0][0];
    int maxRowIndex = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (a[i][j] > maxElement) {
                maxElement = a[i][j];
                maxRowIndex = i;
            }
        }
    }

    cout << "Матриця:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nРядок матриці, що містить найбільший елемент:" << endl;
    for (int j = 0; j < cols; j++) {
        cout << a[maxRowIndex][j] << " ";
    }
    cout << endl;

    return 0;
}