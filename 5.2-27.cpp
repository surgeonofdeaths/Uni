#include <bits/stdc++.h>

using namespace std;

// 5.2 27

int main() {
    double x, y, z, start_x, end_x, step;

    cout << "Початкове значення x: ";
    cin >> start_x;
    cout << "Кінцеве значення x: ";
    cin >> end_x;
    cout << "Крок: ";
    cin >> step;

    for (x = start_x; x <= end_x + 0.1 * step; x += step) {
        y = tan(x / 3.) * sin(x - 1.2);
        z = sin(x) / log(x + 4);
        cout << "x = " << x << "; ";
        cout << "y = " << y << "; ";
        cout << "z = " << z << "; " << endl;
    }
    
    return 0;
}

// 7 25 7.2