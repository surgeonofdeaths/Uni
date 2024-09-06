#include <iostream>

using namespace std;

void calculateSumAndCount(int matrix[3][3], int& sum, int& count) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (matrix[i][j] >= 10 && matrix[i][j] <= 99) {
                sum += matrix[i][j];
                count++;
            }
        }
    }
}

int main() {
    int matrix[3][3] = {{12, 34, 56},
                        {78, 90, 11},
                        {23, 45, 67}};

    int sum = 0;
    int count = 0;

    calculateSumAndCount(matrix, sum, count);

    cout << "Сума двоцифрових елементів: " << sum << endl;
    cout << "Кількість двоцифрових елементів: " << count << endl;

    return 0;
}
