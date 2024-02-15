#include <iostream>
#include <random>

using namespace std;

int main() {
    const int row = 3, col = 5;
    int a[row][col], i = 0, j = 0, randNum;
    double sum = 0, avg = 0, lessAvg = 0;

    // input + calculating sum
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            randNum = rand() % 100; 
            a[i][j] = randNum;
            sum += randNum;
        }
    }

    avg = sum / (row * col);
    cout << "sum = " << sum << endl;
    cout << "avg = " << avg << "\n\n";

    // Output matrix
    for (i = 0; i < row; i++) {
        for (j = 0; j < col; j++) {
            if (a[i][j] < avg) 
                lessAvg += 1;
            cout << a[i][j] << "\t";
        }
        cout << endl;
    }
    cout << "\nКількість елементів, менших за середнє арифметичне = " << lessAvg << endl; 
    return 0;

