#include <cctype>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> extractWordsWithPunctuation(const string& str) {
	vector<string> words;
	string currentWord;
	bool inWord = false;

	// size_t: unsigned integer type
	for (size_t i = 0; i < str.size(); i++) {
		if (isalpha(str[i])) {
			currentWord += str[i];
			inWord = true;
		} else {
			if (inWord) {
				if (ispunct(str[i])) {
					words.push_back(currentWord);
				}
				currentWord.clear();
				inWord = false;
			}
		}
	}

	return words;
}

// Вивести слова введеного рядка, після яких у рядку йдуть розділові знаки
int main() {
	string input;
	cout << "Введіть рядок: ";
	getline(cin, input);

	vector<string> result = extractWordsWithPunctuation(input);

	cout << "Слова, після яких йдуть розділові знаки: ";
	for (const auto& word : result) {
		cout << word << " ";
	}
	cout << endl;

	return 0;
}
