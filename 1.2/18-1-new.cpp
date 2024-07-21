#include <cctype>
#include <iostream>

using namespace std;

int main() {
    char input[100];
    cout << "Введіть рядок: ";
    cin.getline(input, sizeof(input)); 

    char output[100];
    int outputIndex = 0;

    for (char c : input) {
        if (isalpha(c)) {
            output[outputIndex++] = toupper(c);
        } else {
            output[outputIndex++] = c;
        }
    }

    output[outputIndex] = '\0';

    cout << "Результат: " << output << endl;

    return 0;
}
