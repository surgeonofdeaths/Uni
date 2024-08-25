#include <iostream>
#include <vector>

using namespace std;

vector<int> calColProd(int rows, int cols, int matrix[][6]) {
    vector<int> columnProducts(cols, 1); 

    for (int j = 0; j < cols; j++) {
        for (int i = 0; i < rows; i++) {
            if (matrix[i][j] != 0) {
                columnProducts[j] *= matrix[i][j];
            }
        }
    }
    return columnProducts;
}

int main() {
    const int rows = 3, cols = 6;

    int matrix[rows][cols] = {
        {1, 0, 2, 0, 3, 0},
        {0, 4, 0, 5, 0, 6},
        {7, 0, 8, 0, 9, 0}
    };

    vector<int> columnProducts = calColProd(rows, cols, matrix);

    cout << "Добутки ненульових елементів стовпців:" << endl;
    for (int j = 0; j < cols; j++) {
        cout << columnProducts[j] << " ";
    }
    return 0;
}