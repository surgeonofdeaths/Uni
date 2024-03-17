#include <iostream>
#include <vector>
#include <limits>

using namespace std;

vector<double> findMinElements(const double matrix[3][4]) {
    vector<double> minElements(4, numeric_limits<double>::max());

    for (int j = 0; j < 4; j++) {
        for (int i = 0; i < 3; i++) {
            if (matrix[i][j] < minElements[j]) {
                minElements[j] = matrix[i][j];
            }
        }
    }

    return minElements;
}

int main() {
    const double matrix[3][4] = {{1.5, 7.5, 3.5, 4.5},
                                  {5.5, 6.5, 7.5, 8.5},
                                  {9.5, 10.5, 11.5, 12.5}};

    vector<double> minElements = findMinElements(matrix);

    cout << "Вектор найменших елементів стовпців:" << endl;
    for (double element : minElements) {
        cout << element << " ";
    }
    cout << endl;

    return 0;
}