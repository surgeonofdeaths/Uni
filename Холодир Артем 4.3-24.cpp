#include <iostream>
#include <cmath>

using namespace std;

// 4.3 24 option

bool isExistRadius (double x, double y, int R) {
    bool flag;
    flag = pow(x, 2) + pow(y, 2) > pow(R, 2);
    return flag;
}

int main() {
    double x, y;
    int R, n = 1;
    bool result;

    cout << "Введiть цiле число вiд 1 до 3: "; 
    cin >> n;

    switch(n) {
        case 1: x = 78; y = -71; R = 85; break;
        case 2: x = 2; y = 11; R = 13; break;
        case 3: x = -7; y = 6; R = 11; break;
    }
    
    result = isExistRadius(x, y, R);
    if (result) {
        cout << "true" << endl;
    } else {
        cout << "false" << endl;
    }
    return 0;
}