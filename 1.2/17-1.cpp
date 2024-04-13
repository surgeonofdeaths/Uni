#include <iostream>

using namespace std;

int main() {
    int count = 0;

    cout << "Літери латиниці з непарними ASCII-кодами:" << endl;

    for (char c = 'A'; c <= 'z'; c++) {
        if (c % 2 != 0) {
            cout << c << " ";
            count++;
        }
    }

    cout << endl;
    cout << "Кількість літер з непарними ASCII-кодами: " << count << endl;

    return 0;
}