#include "MyLib14.cpp"

int main() {
    double matr[n][k];
    createMatr(matr);
    printOutMatrix(matr);

    double vect[n];
    fillInVect(matr, vect);
    // maxAbsElement(matr, vect);
    for (double element: vect) {
        cout << element << "  ";
    }

    return 0;
}

