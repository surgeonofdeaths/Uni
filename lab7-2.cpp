#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double Q = 0, f, u;
    int k, n, j;

    cout << "n = ";
    cin >> n;

    for (k = 1; k <= n; k++)
    if (k != 1 && k != 3)
     {
        f = 1;
        for (j = 1; j <= k + 1; j++) f *= j;
        u = (pow(k - 1.0, k + 1.0) * (k - 3.0)) / f;
        Q += u;
        cout << "The sum = " << Q << endl;
    }
    cout << "The sum = " << Q;
    cin.get();
    cin.get();
    return 0;
}