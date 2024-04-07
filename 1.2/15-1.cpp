#include <iostream>

using namespace std;

int sumTwoDigitNumbers(int* arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] >= 10 && arr[i] <= 99) {
            sum += arr[i];
        }
    }
    return sum;
}

void logArr(int* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main() {
    int n;
    cout << "Введіть кількість чисел: ";
    cin >> n;

    int* numbers = new int[n];

    for (int i = 1; i <= n; i++) {
        cout << "Введіть число " << i << ": ";
        cin >> numbers[i];
    }

    logArr(numbers, n);
    cout << "Сума двоцифрових елементів: " << sumTwoDigitNumbers(numbers, n) << endl;

    delete []numbers;
    return 0;
}