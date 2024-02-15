#include <bits/stdc++.h>

using namespace std;

// 5.1 5.2 27

int main() {
    int n;
    double x, sum = 0.0;

    cout << "Введіть натуральне число n (до 10): ";
    cin >> n;

    cout << "Введіть дійсне число x: ";
    cin >> x;
    
    cout << "Ступені числа x від 1 до " << n << ":" << endl;

    for (int i = 1; i <= n; i++) {
        double power = pow(x, i);
        sum += power;
        cout << x << "^" << i << " = " << power << endl;
    }

    cout << "Сума ступенів числа x: " << sum << endl;
    return 0;
}