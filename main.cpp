#include <iostream>
#include "search.h"

int main() {
  int list[] = {1,2,4,5,6,7,8,9,10};
  int array_length = 9;
  int number = 4;
  
  std::cout << "Linear Search: " << LinearSearch(list,array_length,number) <<  std::endl;

  std::cout << "Binary Search: " << BinarySearch(list,array_length,number) <<  std::endl;
}