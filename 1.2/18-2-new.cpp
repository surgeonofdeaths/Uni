#include <iostream>
#include <cctype>

using namespace std;

int main() {
    const int MAX_INPUT_SIZE = 100; 
    char input[MAX_INPUT_SIZE];

    cout << "Введіть рядок слів: ";
    cin.getline(input, MAX_INPUT_SIZE); 

    int wordCount = 0;
    int wordStart = 0; 

    for (int i = 0; input[i] != '\0'; i++) {
        if (isspace(input[i])) {
            if (wordCount % 2 != 0) {
                for (int j = wordStart; j < i; j++) {
                    cout << input[j];
                }
                cout << " ";
            }
            wordCount++;
            wordStart = i + 1;
        }
    }

    if (wordCount % 2 != 0) {
        for (int j = wordStart; input[j] != '\0'; j++) {
            cout << input[j];
        }
    }

    cout << endl;
    return 0;
}
