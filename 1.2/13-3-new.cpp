#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main() {
	ifstream inFile("matrix.txt");

	if (!inFile.is_open()) {
		cout << "Не вдалося відкрити вхідний файл.";
		return 1;
	}

	int rows, cols;
	inFile >> rows >> cols;
	vector<vector<int>> matrix(rows, vector<int>(cols));

	for (int i = 0; i < rows; ++i) {
		for (int j = 0; j < cols; ++j) {
			inFile >> matrix[i][j];
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}

	int product = 1;
	for (int i = 0; i < rows; i++) {
		int value = matrix[i][cols - 1 - i];
		product *= value;
	}

	fstream outFile("output.txt");
	outFile << product;
	outFile.close();
	cout << "Добуток елементів неголовної діагоналі: " << product << endl;

	return 0;
}
