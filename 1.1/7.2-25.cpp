#include <bits/stdc++.h>

using namespace std;

// 7.2 25

int main() {
    int k, j, i, S;
    int P = 1; 
    
    cout << "Введiть значення k = ";
    cin >> k;
    
    for (j = 1; j <= k; j++) 
        if (j != 3 && j != 6) 
        {
            S = 0;
            for (i = j; i <= 10; i++) 
            if (i != 4 && sin(i + 5) != 0)
            {
                double temp = sin(i + 5.) / (i - 4.);
                S += temp;
                cout << "S = " << S << endl;
            }
            P *= ((j - 6.) / (j - 3.)) * S;
            cout << "P = " << P << endl;
        }
    
    return 0;
}

// 7 25 7.2