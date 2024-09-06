#include <cstring>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
	char line[100];
	cout << "Введіть рядок слів: ";
	cin.getline(line, sizeof(line));

	for (int i = 0; i < strlen(line); i++) istringstream iss(line);
	string word;
	vector<string> words_with_dash;

	while (iss >> word) {
		if (word.find('-') != string::npos) {
			words_with_dash.push_back(word);
		}
	}

	if (words_with_dash.empty()) {
		cout << "У введеному рядку немає слів з дефісом." << endl;
	} else {
		cout << "Слова з дефісом у введеному рядку:" << endl;
		for (const string& word : words_with_dash) {
			cout << word << endl;
		}
	}

	return 0;
}