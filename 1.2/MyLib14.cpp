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
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            cout << matrix[i][j] << "     ";
        }
        cout << endl;
    }
}

double fillInVect(double matr[n][k], double vect[n]&) {
    double vect[n];

    for (int i = 0; i < n; i++) {
        vect[i] = matr[i][0];
    }
    return vect;

}

void maxAbsElement(double matr[n][k], double vect[n]) {
    double tempMax = abs(matr[0][0]); 
   
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            double absValue = abs(matr[i][j]); 
            if (absValue > tempMax) { 
                vect[i] = tempMax;
            }
        }
        cout << tempMax << endl;
        tempMax = numeric_limits<double>::min();
    }
}