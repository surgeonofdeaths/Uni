#include <iostream>
#include <climits>

using namespace std;

const int SIZE = 5;

void replaceZerosWithMax(int matrix[SIZE][SIZE]) {
    // max element
    int maxElement = INT_MIN;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }

    // replace zeros with the max element h
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j] == 0) {
                matrix[i][j] = maxElement;
            }
        }
    }
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 0, 3, 0, 5},
        {0, 2, 0, 4, 0},
        {6, 0, 8, 0, 10},
        {0, 12, 0, 14, 0},
        {16, 0, 18, 0, 20}
    };

    // before 
    cout << "Початкова матриця:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    replaceZerosWithMax(matrix);

    // after
    cout << "\nМатриця після заміни:" << endl;
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}