#include <iostream>
#include <limits>

using namespace std;

int findMaxElement(int matrix[3][4]) {
    int maxElement = numeric_limits<int>::min(); 

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] > maxElement) {
                maxElement = matrix[i][j];
            }
        }
    }

    return maxElement;
}

void replaceNums(int maxElement, int matrix[3][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            if (matrix[i][j] % 5 == 0) {
                matrix[i][j] = maxElement;
            }
        }
    }
}

void printOutMatrix(int matrix[3][4]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int matrix[3][4] = {{10, 6, 12, 15},
                        {20, 25, 39, 35},
                        {42, 45, 50, 57}};

    int maxElement = findMaxElement(matrix);

    cout << "Матриця до:" << endl;
    printOutMatrix(matrix);
    cout << "\n";

    replaceNums(maxElement, matrix);

    cout << "Оновлена матриця:" << endl;
    printOutMatrix(matrix);

    return 0;
}