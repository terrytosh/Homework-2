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
Initialize a variable to store the word length range
Call MaxWordLength() - MinWordLength(), both with the parameters
used to call WordLengthRange()
Return range

AverageWordLength:
Initialize a variable sum to store the total amount of characters in the list of words
Iterate through the list adding the lengths of each word to sum
Return the sum divided by the length to get the average word length

MostCommonWordLength:
Initialize an unordered_map to count the number of occurrences
Loop from the min to max length of array setting each value to 0
for the key/value pair
Loop through the array, update the value by 1 of the corresponding
key depending on the word length
Loop through the unordered_map pairs, storing the key with the
most common occurence
Finally, loop through the key/value pairs searching for values that match
the most common occurences. If they match and are not the key with the most common occurences, that means there is multiple. Return -1
Else, return the most common occurence
*
*/
#include "dictionary.h"
#include <iostream>
#include <cassert>
#include <unordered_map>
using std::string;
using std::cout;
using std::endl;

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
    assert(length > 0);
    int range = MaxWordLength(words, length) - MinWordLength(words, length);

    return range;
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
    assert(length > 0);
    std::unordered_map<int, int> umap;
    int min = MinWordLength(words, length);
    int max = MaxWordLength(words, length);
    int most_common_length = -1;

    for(int i = min; i <= max; i++){
      umap[i] = 0;
    }
    for(int i = 0; i < length; i++){
      umap.at(words[i].length()) = umap[words[i].length()] + 1;
    }
    for(int i = min; i <= max; i++){
      if(umap[i] > umap[most_common_length]){
        most_common_length = i;
      }
    }
    for(int i = min; i <= max; i ++){
      if(i != most_common_length && umap[i] == umap[most_common_length]){
        return -1;
      }
    }

  return most_common_length;
}
