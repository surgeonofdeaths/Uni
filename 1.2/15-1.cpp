#-include <iostream>

using namespace std;

int sumTwoDigitNumbers(int* arr, int size) {
	int sum = 0;
	for (int i = 0; i < size; i++) {
		if (arr[i] >= 10 && arr[i] <= 99) {
			sum += arr[i];
		}
	}
	return sum;
}

void logArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << "\n";
}

int main() {
	int n, element;
 cin >> n;

	int* numbers = new int[n];
	int validElementsCount = 0;

	for (int i = 0; i < n; i++) {
		cin >> element;

		if (element <= 100) {
			numbers[validElementsCount] = element;
			validElementsCount++;
		}
	}

	cout << "Array before: \n";
	logArr(numbers, n);

	int* filteredNumbers = new int[validElementsCount];

	for (int i = 0; i < validElementsCount; i++) {
		filteredNumbers[i] = numbers[i];
	}

	logArr(filteredNumbers, validElementsCount);
	
	delete[] numbers;
	delete[] filteredNumbers;
	/*delete[] newNumbers;*/
	return 0;
}
// 15 17.2 18 13.3
