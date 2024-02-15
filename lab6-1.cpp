#include <bits/stdc++.h>

using namespace std;

int main() {
    double positiveSum, x; double divider = 0;

    for (int i = 1; i <= 8; i++) {
        cout << "Введіть " <<  i << " число: ";
        cin >> x;

        if (x > 0) {
            divider += 1;
            positiveSum += x;
        }
    }
    double avg = positiveSum / divider; 
    cout << "Середнэ арифметичне додатніх = " << avg;
    return 0;
}