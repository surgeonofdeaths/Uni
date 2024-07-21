#include <fstream>
#include <iostream>
#include <string>

using namespace std;

bool containsDigits(const string& line) {
	for (char c : line) {
		if (isdigit(c)) {
			return true;
		}
	}
	return false;
}

ofstream writeFile(string fileName) {
	ofstream file(fileName);
	if (file.is_open()) {
		file << "Це перший рядок.\n";
		file << "Другий рядок містить число 123.\n";
		file << "Третій рядок без цифр.\n";
		file << "Четвертий рядок містить цифри: 456.\n";
		file << "П'ятий рядок не містить цифр.\n";
		file << "Шостий рядок містить цифри: 1234567890.\n";
		file.close();
	} else {
		cerr << "Не вдалося відкрити файл для запису.\n";
	}
	return file;
}

int main() {
	// TODO: fstream
	string fileName = "example.txt";
	ofstream file = writeFile(fileName);

	ifstream inFile(fileName);
	if (inFile.is_open()) {
		string line;
		while (getline(inFile, line)) {
			if (containsDigits(line)) {
				ofstream newFile(fileName);
				file << line;
				cout << line << endl;
			}
		}
		inFile.close();
	} else {
		cerr << "Не вдалося відкрити файл для читання.\n";
		return 1;
	}

	return 0;
}
