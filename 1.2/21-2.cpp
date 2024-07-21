#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

vector<string> splitIntoWords(const string& line) {
	vector<string> words;
	istringstream stream(line);
	string word;
	while (stream >> word) {
		words.push_back(word);
	}
	return words;
}

int main() {
	ofstream outFile("example.txt");
	if (outFile.is_open()) {
		outFile << "Це перший прикладовий рядок.\n";
		outFile << "Другий рядок містить деякі довгі слова.\n";
		outFile << "Третій рядок без довгих слів.\n";
		outFile << "Цей рядок має дужедовгі слова для тестування.\n";
		outFile.close();
	} else {
		cerr << "Не вдалося відкрити файл для запису.\n";
		return 1;
	}

	ifstream inFile("example.txt");
	if (inFile.is_open()) {
		string line;
		vector<string> longWords;
		while (getline(inFile, line)) {
			vector<string> words = splitIntoWords(line);
			for (const auto& word : words) {
				if (word.size() / 2 > 7) {
					longWords.push_back(word);
				}
			}
		}
		inFile.close();

		cout << "Слова з довжиною більше 7 символів:\n";
		for (const auto& word : longWords) {
			cout << word << endl;
		}
		cout << "\nКількість таких слів: " << longWords.size() << endl;

	} else {
		cerr << "Не вдалося відкрити файл для читання.\n";
		return 1;
	}

	return 0;
}

// 13.3
