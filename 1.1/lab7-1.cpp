#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double y = 0, u, x; int i, j, f;
    cout << "x = ";
    cin >> x;
    
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= 2 * i - 1; j++) f *= j;
        u = pow(-1, i + 1) * (sin(pow(x, i))) / f;
        y += u;
    }
    cout << "The sum = " << y;
    cin.get();
    cin.get();
    return 0;
}