#include "MyLib14.h"
#include <iostream>
#include <cmath>

using namespace std;

void createMatr(double matr[n][k]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (i > j) 
                matr[i][j] = log(i - j) + cos(7 * i - j);
            else 
                matr[i][j] = log10(j - i + 7) - exp(i / (j - i + 1));
    }
}
}

void printOutMatrix(double matrix[n][k]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << matrix[i][j] << "     ";
        }
        cout << endl;
    }
}