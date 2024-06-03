#include <iostream>
#include <string>

using namespace std;

// У введеному рjдку поміняти місцями перший і останній
// символи першого слова
string swapFirstAndLastChar(string str) {
	int start = 0;

	// check if the string is empty or only contains spaces
	while (start < str.size() && isspace(str[start])) {
		start++;
	}

	if (start == str.size()) {
		// if the string is empty
		return str;
	}

	int end = start;
	while (end < str.size() && !isspace(str[end])) {
		end++;
	}

	// swap the first and last characters
	if (end - start > 1) {
		swap(str[start], str[end - 1]);
	}

	return str;
}

int main() {
	string input;
	cout << "Введіть рядок: ";
	getline(cin, input);
	string result = swapFirstAndLastChar(input);
	cout << "Результат: " << result << endl;

	return 0;
}
