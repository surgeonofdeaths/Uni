#include <iostream>

using namespace std;


int main() {
    int matrix[6][6] = {
        {1, 0, 3, 0, 5, 7},
        {0, 2, 0, 4, 0, 8},
        {6, 0, 8, 0, 10, 9},
        {0, 12, 0, 14, 0, 10},
        {16, 0, 18, 0, 20, 12},
        {0, 10, 15, 7, 20, 16}
    };
    double d;
    for(int i = 0; i<6; i++) {
        for(int j=0; j<6; j++) {
            
            for ()
            double distance = abs(matrix[i][j] - matrix[j][i]);
            if(distance > d) {
                d = distance;
                element = matrix[i][j];
            }
        }
    }

    return 0;
}