#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int size = 16;
    int S = 0, array[size];
    
    for (int i = 0; i < size; i++) {
        cout << "Enter item of array #" << i + 1 << ": ";
        cin >> array[i];
        
        if (array[i] % 3 == 0) {
            S += array[i];
        }
    }
    cout << "Sum = " << S << endl;
    return 0;
}
