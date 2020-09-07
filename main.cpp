#include <iostream>
#include "dictionary.h"

const int SIZE = 6;

int main() {
  std::string words[] = {"pineapple", "apple", "couch", "yourmom", "reallylongword", "cat"};

  int min_word_length = MinWordLength(words, SIZE);
  std::cout << "Min length: " << min_word_length << std::endl;

  int max_word_length = MaxWordLength(words, SIZE);
  std::cout << "Max length: " << max_word_length << std::endl;

  int avg_word_length = AverageWordLength(words, SIZE);
  std::cout << "Avg length: " << avg_word_length << std::endl;

  int word_length_range = WordLengthRange(words, SIZE);
  std::cout << "Word length range: " << word_length_range << std::endl;

  return 0;
}