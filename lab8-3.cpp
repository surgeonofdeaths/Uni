#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int num, firstNum;
    cout << "Введіть натуральне число: ";
    cin >> num;
    firstNum = num;

    while (firstNum >= 10) {
        firstNum /= 10;  
    }

    int count = 0;

    while (num > 0) {
        int lastNum = num % 10; 
        if (lastNum == firstNum) {
            count++;  
        }
        num/= 10;  
    }
    cout << "Перша цифра зустрічається " << count << " разів у введеному числі." << endl;
    return 0;
}
