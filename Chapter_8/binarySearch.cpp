/*
  The binarySearch is clever algorithm that is much more efficient than
  the linear search. Its only requirement is that the values in the array be
  sorted in order.  Instead of testing the arrays first element, this algorithm
  starts with the element in the middle.  If that element happens to contain the
  desired value, then the search is over. Otherwise, the value in the middle
  element is either greater than or less than the value being searched for.
  If it is greater, then the desired value(if it is in the list) will be found
  somewhere in the first half of the array. If it is less, then the desired value
  (again, if it is in the list) will be found somewhere in the last half of the
  array.  In either case, half of the arrays elements have been eliminated from
  further searching.

  If the desired value wasnt found in the middle element, the procedure is repeated
  for the half of the array that potentially contains the value.  For instance,
  if the last half of the array is to be searched, the algorithm immediately tests
  its midle element.  If the desired value isnt found there, the search is narrowed
  to the quarter of the array that resides before or after the element.  This
  process continues until either the value being searched for is found or there
  are no more elements to test.
*/

#include <iostream>
using namespace std;

// Function prototype
int binarySearch(const int [], int, int);
const in SIZE = 20;

int main()
{
  // Array with employee ID's in ascending order
  int idNums[SIZE] {101, 142, 147, 189, 199, 207, 222,
                    234, 289, 296, 310, 319, 388, 394,
                    417, 429, 447, 521, 536, 600};
  int results;      // To hold the search results
  int empID;        // To hold and employee ID

  // Get an employee ID to search for
  cout << "Enter the employee ID you wish to search for: "j
  cin >> empID;

  // Search for the ID
  results = binarySearch(idNums, SIZE, empID);

  // If results contains -1 the ID was not found
  if (results == -1)
      cout << "That number does not exist in the array. \n";
  else
  {
    // Otherwise results contains the subscript of
    // the specified employee ID in the array
    cout << "That ID is found at element " << results;
    cout << " in the array.\n";
  }
  return 0;
}

/*
  The binarySearch functio performs a binary search on an integer array.
  array, which has a maximum of size elements, is searched for the number
  stored in value.  If the number is found, its array subscript is retured.
  Otherwise, -1 is retured indicating the value was not in the array.
*/

int binarySearch(const int array[]), int size, int value)
{
  int first = 0,        // First array element
      last = size - 1   // Last array element
      middle,           // Midpoint of search
      position = -1     // Position of search value
  bool found = false;   // Flag

  while (!found && first <= last)
  {
      middle = (first + last) / 2;    // Calculate midpoint
      if (array[middle] == value)     // If value is found at mid
  }
  return postion;
}
