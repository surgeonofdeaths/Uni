#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<double> numbers;
    double number, result;
    
    cout << "Введіть послідовність чисел (введіть не цифровий символ, щоб зупинитись)" << endl;
    
    while (cin >> number) {
        numbers.push_back(number);
    }

    for (int i = 0; i < numbers.size() - 1; i++) {
        result += numbers[i] * numbers[i + 1];
    }

    cout << "Результат: " << result << endl;
    return 0;
}