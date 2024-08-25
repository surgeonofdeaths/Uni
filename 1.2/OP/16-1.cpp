#include <iostream>
using namespace std;

bool containsDigit(int number, int digit)
{
    while (number != 0)
    {
        int curr_digit = number % 10;
        if (curr_digit == digit) return true;
        number /= 10;
    }

    return false;
}

int main()
{
    // setlocale(0, ".1251");
    int row = 7, col = 3;
    int a[row][col], i, j, rowc = 0, k = 0;
    cout << "Введiть матрицю з 7 рядкiв i 3-х стовпцiв:" << endl;
    int r[row] = {0}; 
    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
        {
            cin >> a[i][j];
            // cout << a[i][j] << endl;
            if (containsDigit(a[i][j], 7)) {
                r[i]++;
            }
        }
    for (i = 0; i < row; i++) 
        if (r[i] == 0)
            rowc++;          
    int **b = new int *[rowc]; 

    for (i = 0; i < rowc; i++)
        b[i] = new int[3];

    for (i = 0; i < row; i++) {
        if (r[i] == 0) {
            for (j = 0; j < col; j++)
                b[k][j] = a[i][j]; 
            k++;                  
        }
    }
    cout << "\nМатриця, без жодного елемента 7:" << endl;
    for (i = 0; i < rowc; i++) {
        for (j = 0; j < col; j++)
            cout << b[i][j] << "\t";
        cout << endl;
    }

    for (int i = 0; i < rowc; i++)
        delete[] b[i];
    delete[] b;
    return 0;
}
