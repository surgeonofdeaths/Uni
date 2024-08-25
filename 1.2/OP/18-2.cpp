#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	string input;
	cout << "Введіть рядок слів: ";
	getline(cin, input);

	istringstream iss(input);
	string word;
	string result;

	int wordCount = 0;

	while (iss >> word) {
		wordCount++;
		if (wordCount % 2 != 0) {
			result += word + " ";
		}
	}

	cout << "Результат: " << result << endl;

	return 0;
}
