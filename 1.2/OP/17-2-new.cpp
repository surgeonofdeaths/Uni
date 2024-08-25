#include <iostream>
#include <vector>
#include <cctype> 
#include <cstring> 

using namespace std;

int main() {
  char line[100];
  cout << "Введіть рядок слів: ";
  cin.getline(line, sizeof(line));
  vector<char*> words_with_dash; 

  char* word_start = line; 

  while (*word_start != '\0') {
    while (*word_start != '\0' && !isalnum(*word_start)) {
      word_start++;
    }

    if (*word_start == '\0') {
      break; 
    }

    char* word_end = word_start + 1;

    while (*word_end != '\0' && isalnum(*word_end)) {
      word_end++;
    }

    if (word_end > word_start && strchr(word_start, '-') != nullptr) {
      words_with_dash.push_back(word_start); 
    }

    word_start = word_end; 
  }

  if (words_with_dash.empty()) {
    cout << "У введеному рядку немає слів з дефісом." << endl;
  } else {
    cout << "Слова з дефісом у введеному рядку:" << endl;
    for (const char* word : words_with_dash) {
      cout << word << endl;
    }
  }

  return 0;
}
