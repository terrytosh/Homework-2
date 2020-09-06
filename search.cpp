/****
* PSEUDOCODE:
LinearSearch:
Loop through array sequentially
If n equals a number in the array, return that index
Else if n doesn't exist in the array, return -1

BinarySearch:
Calculate for the middle index in array 
Compare target value to middle element in list.
If equal, then return its index
If less than middle element, repeat the search in the first half of list 
If greater than middle element, repeat the search in last half of list 
If current search list is narrowed down to 0 elements, return -1
*
*/
int LinearSearch(int numbers[], int length, int n) {
  for(int i = 0; i < length; i++){
    if(numbers[i] == n){
      return i;
    }
  }
   return -1;
}

int BinarySearch(int numbers[], int length, int n) {
    int first = 0,
        last = length - 1,
        middle,
        position = -1;
    bool found = false;

    while(first <= last && !found){
      middle = (first + last) / 2;
      if(numbers[middle] == n){
        found = true;
        position = middle;
      }
      else if(numbers[middle] > n){
        last = middle - 1;
      }
      else{
        first = middle + 1;
      }
    }
    return position;
}