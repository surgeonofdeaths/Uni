#include <iostream>
#include <cmath>

using namespace std;

int main() {
    const int size = 19;
    int array[size], min_diff = 100, min_ind;
    
    for (int i = 0; i < size; i++) {
        cout << "Введіть елемент масиву: ";
        cin >> array[i];
    }
    
    for (int i = 0; i < size - 1; i++) {
        int diff = abs(array[i + 1] - array[i]);
        
        if (diff < min_diff) {
            min_diff = diff;
            min_ind = i;
        }
        cout << array[i] << " ";
    }
    cout  << "\n";
    cout << "Min difference = " << min_diff << endl;
    cout << "Index #" << min_ind << "and #" << min_ind + 1 << 
        "are the lowest substraction of numbers in the array" << endl;
    return 0;
}