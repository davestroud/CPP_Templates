// This program demonstrates the binarySearch function, which
// performs a binary search on an integer array.
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
