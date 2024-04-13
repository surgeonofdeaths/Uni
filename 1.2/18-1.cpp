#include <iostream>
#include <string>
#include <cctype> 

using namespace std;

int main() {
    string input;
    cout << "Введіть рядок: ";
    getline(std::cin, input);

    string result;

    for (char c : input) {
        if (isalpha(c)) { 
            result += toupper(c); 
        } else {
            result += c; 
        }
    }

    cout << "Результат: " << result << endl;

    return 0;
}