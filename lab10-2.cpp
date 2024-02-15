#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int size = 7;
    int array[size];
    
    for (int i = 0; i < 7; i++) {
        cout << "Введіть елемент масиву: ";
        cin >> array[i];
    }
    
    int new_array[size];
    int j = 0;

    // додатні та нулі
    for (int i = 0; i < size; i++) {
        if (array[i] >= 0) {
            new_array[j++] = array[i];
        }
    }

    // від'ємні
    for (int i = 0; i < size; i++) {
        if (array[i] < 0) {
            new_array[j++] = array[i];
        }
    }
    
    for (int i = 0; i < size; i++) {
        cout << new_array[i] << " ";
    }
    return 0;
}