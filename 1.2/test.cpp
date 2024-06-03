#include <iostream>
#include <string>

using namespace std;

int main() {
	setlocale(LC_ALL, ".1251");
	string input;
	cout << "Введіть рядок: ";
	getline(cin, input);
	cout << "Всі символи та їх коди:" << endl;
	for (char c : input) {
		int charCode = static_cast<int>(c);
		cout << "Символ: " << c << ", Код: " << charCode << endl;
	}
	char minChar = input[0];  // Початкове значення для порівняння
	int minCharCode = static_cast<int>(minChar);  // Код символу

	for (char c : input) {
		int charCode = static_cast<int>(c);
		if (charCode < minCharCode) {
			minCharCode = charCode;
			minChar = c;
		}
	}
	cout << "Символ з найменшим кодом: " << minChar << " - " << minCharCode
		 << endl;
	return 0;
}
