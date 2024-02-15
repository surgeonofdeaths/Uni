#include <iostream>
#include <cmath>

using namespace std;


void printArr(double *array, int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << "  ";
    }
}

void findTwoLastMaxInd(double *array, int size, int &max_ind1, int &max_ind2) {
    double max_element1 = array[0];
    double max_element2 = array[0];

    for (int i = 0; i < size; i++) {
        if (array[i] > max_element1) {
            max_element2 = max_element1;
            max_element1 = array[i];
            max_ind2 = max_ind1;
            max_ind1 = i;
        } else if (array[i] > max_element2) {
            max_element2 = array[i];
        }
    }
}

void swapInds(double *array, int &max_ind1, int &max_ind2) {
    int temp = array[max_ind1];
    array[max_ind1] = array[max_ind2];
    array[max_ind2] = temp;
}

int main()
{
    const int size = 7;
    double array[size];
    
    for (int i = 0; i < size; i++) {
        cout << "Enter item of array #" << i + 1 << ": ";
        cin >> array[i];
    }

    int max_ind1 = -1;
    int max_ind2 = -1;

    cout << "\n" << "Before swapping: " << endl;
    printArr(array, size);

    findTwoLastMaxInd(array, size, max_ind1, max_ind2);
    swapInds(array, max_ind1, max_ind2);

    cout << "\n" << "After swapping: " << endl;
    printArr(array, size);
    return 0;
}