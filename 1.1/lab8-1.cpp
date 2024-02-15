#include <iostream>
#include <cmath>

using namespace std;

double factorial (double n) {
    double res = 1.0;

    for(int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    setlocale(0,".1251");

    int k = 1;
    double u, s, x;
    cout << "Введiть значення x= ";
    cin >> x;
    cout << "\nРезультати:\n";

    do {
        u = (pow(-1, k + 1) * pow(x, k + 3)) / (pow(k, 2) * factorial(k + 2));
        s += u;
        k++;
    } while (fabs(u)>=1e-4);

    cout << "Сума = " << s << endl;
    cout << "Кiлькiсть доданкiв = " << k << endl;
    return 0;
}