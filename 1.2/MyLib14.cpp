#include "MyLib14.h"

#include <iostream>
#include <cmath>
#include <vector>
#include <limits>

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
    cout << "Generated matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << matrix[i][j] << "     ";
        }
        cout << endl;
    }
}

void printOutVector(double vect[n]) {
    cout << "\nGenerated vector:" << endl;

    for (int i = 0; i < n; i++) {
        cout << vect[i] << "  ";
    }
    cout << "\n\n";
}

void fillInVect(double matr[n][k], double vect[n]) {
    for (int i = 0; i < n; i++) {
        vect[i] = matr[i][0];
    }
}

void createMaxAbsVect(double matr[n][k], double vect[n]) {
    for (int i = 0; i < n; i++) {
        vect[i] = matr[i][0];
        for (int j = 1; j < k; j++) {
            double absValue = fabs(matr[i][j]); 
            if (vect[i] > absValue) { 
                vect[i] = absValue;
            }
        }
    }
}

double calculateSum(double matr[][k]) {
    double sum = 0.0;

    for (int i; i < n; i++) {
        for (int j; j < k; j++) {
            sum += matr[i][j];
        }
    }

    return sum;
}

double calcGreaterThanAverage(double matr[n][k], double average) {
    double sumGreaterThanAverage = 0.0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            if (matr[i][j] > average) {
                sumGreaterThanAverage += matr[i][j];
            }
        }
    }
    return sumGreaterThanAverage;
}
// 12.3 30