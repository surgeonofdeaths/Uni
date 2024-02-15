#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double S = 0, x;
    int k;
    cout << "x = ";
    cin >> x;

    // for
    for (int k = 2; k <= 9; k++) {
        S += (tan(x) - pow(x, 2) / k) / (pow(k, 2) - 1);
    }
    cout << "for:" << endl;
    cout << "S = " << S << endl;

    // while
    S = 0;
    k = 2;
    while (k <= 9) {
        S += (tan(x) - pow(x, 2) / k) / (pow(k, 2) - 1);
        k++;
    }
    cout << "while:" << endl;
    cout << "S = " << S << endl;

    // do while
    S = 0;
    k = 2;
    do {
        S += (tan(x) - pow(x, 2) / k) / (pow(k, 2) - 1);
        k++;
    } while (k <= 9);
    cout << "while do:" << endl;
    cout << "S = " << S << endl;

    return 0;
}
