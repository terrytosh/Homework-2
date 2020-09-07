/****
* PSEUDOCODE:
MinWordLength:
Initialize a variable to store min word length
Iterate through the list with a linear search, comparing
each index's string length to min
If the current string's length is less than min, change min
to the current string's length
Return min

MaxWordLength:
Initialize a varibale to store max word length
Iterate through the list with a linear search, comparing
each index's string length to max
If the current string's length is greater than max, change max
to the current string's length
Return max

WordLengthRange:

AverageWordLength:
Initialize a variable sum to store the total amount of characters in the list of words
Iterate through the list adding the lengths of each word to sum
Return the sum divided by the length to get the average word length
*
*/
#include "dictionary.h"
#include <iostream>
#include <cassert>
using namespace std;

int MinWordLength(string words[], int length) {
    assert(length > 0);
    int min = words[0].length();
    
    for(int i = 1; i < length; i++){
      if(words[i].length() < min){
        min = words[i].length();
      }
    }
    return min;
}

int MaxWordLength(string words[], int length) {
    assert(length > 0);
    int max = words[0].length();
    
    for(int i = 1; i < length; i++){
      if(words[i].length() > max){
        max = words[i].length();
      }
    }
    return max;
}

int WordLengthRange(string words[], int length) {
  throw "Unsupported Operation";
}

int AverageWordLength(string words[], int length) {
    assert(length > 0);
    int sum = 0;

    for(int i = 0; i < length; i++){
      sum += words[i].length();
    }

    return sum / length;
}

int MostCommonWordLength(string words[], int length) {
  throw "Unsupported Operation";
}
