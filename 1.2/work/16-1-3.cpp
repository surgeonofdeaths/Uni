#include <iostream>

using namespace std;

float** input_matrix(int rows, int cols) {
	float** matrix = new float*[rows];
	for (int i = 0; i < rows; ++i) {
    	matrix[i] = new float[cols];
    	for (int j = 0; j < cols; ++j) {
        	float element;
        	cout << "Enter element [" << i + 1 << "][" << j + 1 << "]: ";
        	cin >> element;
        	matrix[i][j] = element;
    	}
	}
	return matrix;
}

void release_matrix(float** matrix, int rows) {
	for (int i = 0; i < rows; ++i) {
    	delete[] matrix[i];
	}
	delete[] matrix;
}

int main() {
	const int ROWS = 9;
	const int COLS = 3;
    
	cout << "Enter a matrix of size 9x3:\n";
	float** matrix = input_matrix(ROWS, COLS);
    
	int new_rows = 0;
	for (int i = 0; i < ROWS; ++i) {
    	bool add_row = true;
    	for (int j = 0; j < COLS; ++j) {
        	if (matrix[i][j] < 50 || matrix[i][j] > 100) {
            	add_row = false;
            	break;
        	}
    	}

if (add_row) {
        	new_rows++;
    	}
	}
    
	float** new_matrix = new float*[new_rows];
	int current_row = 0;
	for (int i = 0; i < ROWS; ++i) {
    	bool add_row = true;
    	for (int j = 0; j < COLS; ++j) {
        	if (matrix[i][j] < 50 || matrix[i][j] > 100) {
            	add_row = false;
            	break;
        	}
    	}
    	if (add_row) {
        	new_matrix[current_row] = new float[COLS];
        	for (int j = 0; j < COLS; ++j) {
            	new_matrix[current_row][j] = matrix[i][j];
        	}
        	current_row++;
    	}
	}
    
	cout << "New matrix:\n";
	for (int i = 0; i < new_rows; ++i) {
    	for (int j = 0; j < COLS; ++j) {
        	cout << new_matrix[i][j] << " ";
    	}
    	cout << "\n";
	}
    
	release_matrix(matrix, ROWS);
	release_matrix(new_matrix, new_rows);
	return 0;
}