#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int row, col;

    cout << "Введість кількість рядків та столбців через пробіл:";
    cin >> row >> col;
    int matr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> matr[i][j];
        }
    }
    int newMatr[col][row];


    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            newMatr[j][i] = matr[i][j];
        }
    }

    // Output
    cout << "Transposed Matrix:\n";
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << newMatr[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}