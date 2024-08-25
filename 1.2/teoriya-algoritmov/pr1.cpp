#include <iostream>

using namespace std;

int gcd(int a, int b) {
  while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main() {

  setlocale(LC_ALL, "Ru");
  int student_number, c, d;

  cout << "Введіть ваш номер студента: ";
  cin >> student_number;
  cout << "Введіть 2 числа НСД яких хочете знайти ";
  cin >> c;
  cin >> d;

  int a = student_number + c;
  int b = student_number + d;

  cout << "Число a: " << a << endl;
  cout << "Число b: " << b << endl;

  int result = gcd(a, b);

  cout << "Найбільший спільний дільник чисел " << a << " і " << b << ": "
       << result << endl;

  cout << "Програму виконав: Холодир Артем " << endl;

  return 0;
}
