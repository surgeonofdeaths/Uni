#include <iostream>
#include <cmath>

using namespace std;

double calcAvg(int *array, int size) {
    double avg;
    int minNum = array[0];
    int maxNum = array[0];

    for (int i = 0; i < size; i++) {
        if (minNum > array[i]) {
            minNum = array[i];
        }
        if (maxNum < array[i]) {
            maxNum = array[i];
        }
    }
    cout << "min = " << minNum << endl;
    cout << "max = " << maxNum << endl;
    avg = (minNum + maxNum) / 2.;
    return avg;
}

int main() {
    const int size = 16;
    double avg;
    int array[size];
    
    for (int i = 0; i < size; i++) {
        cout << "Enter item of array #" << i + 1 << ": ";
        cin >> array[i];
    }

    avg = calcAvg(array, size);
    cout << "Avg = " << avg << endl;
    return 0;
}