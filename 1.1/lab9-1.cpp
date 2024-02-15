#include <iostream>
#include <cmath>

using namespace std;

int sum(int n) {
    int res = 0;
    while (n > 0) {
        int num = n % 10;
        res += num;
        n /= 10;
    }
    return res;
}

int main() {
    int num;
    
    for (int i = 1; i <=3; i++) {
        cout << "num = ";
        cin >> num;
        int res = sum(num);
        cout << "sum of " << num << " = ";
        cout << res << "\n\n";
    }
    return 0;
}