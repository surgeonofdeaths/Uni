#include <iostream>
#include <string>

using namespace std;

int main() {
  string str;
  cout << "Введіть рядок: ";
  getline(cin, str);

  bool isWord = false;
  bool hasHyphen = false;

  for (char c : str) {
    if (isalpha(c) || c == '-') {
      if (!isWord) {
        isWord = true;
        if (c == '-') {
          hasHyphen = true;
        }
      }
    } else {
      if (isWord && hasHyphen) {
        cout << str.substr(i, j) << " ";
      }
      isWord = false;
      hasHyphen = false;
      i = j + 1;
    }
    j++;
  }

  if (isWord && hasHyphen) {
    cout << str.substr(i, j) << " ";
  }

  return 0;
}
