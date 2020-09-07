#include <iostream>
#include "dictionary.h"

int main() {
  std::string words[] = {"pineapple", "apple", "couch", "yourmom", "reallylongword", "cat"};

  int min_word_length = MinWordLength(words, 6);
  std::cout << "Min length: " << min_word_length << std::endl;

  int max_word_length = MaxWordLength(words, 6);
  std::cout << "Max length: " << max_word_length << std::endl;

  int avg_word_length = AverageWordLength(words, 6);
  std::cout << "Avg length: " << avg_word_length << std::endl;

  return 0;
}