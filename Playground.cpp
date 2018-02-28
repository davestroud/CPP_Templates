// This program demonstrates the binarySearch function, which
// performs a binary search on an integer array
#include <iostream>

// Function prototype
int binarySearch(const int [], int, int);
const int SIZE = 20;

int main(int argc, char const *argv[]) {
        // Array with employee ID's sorted in ascending order.
        int idNums[SIZE] = {101, 142, 147, 189, 199, 207, 222,
                            234, 289, 296, 310, 319, 388, 394,
                            417, 429, 447, 521, 536, 600};
        int results;  // To hold the search results
        int empID;    // To hold an employee ID

        // Get an employee ID to search for.
        std::cout << "Enter the employee ID you wish to search for: " << std::endl;
        std::cin >> empID;

        // Search for the ID
        results = binarySearch(idNums, SIZE, empID);

        // If results contains -1, the ID was not found.
        if (results == -1)
                std::cout << "That number does not exist in the array" << std::endl;
        else
        {
                // Otherwire results contains the subscript of
                // the specified employee ID in the array.
                std::cout << "That ID is found at element " << results <<
                        std::cout << " in the array" << std::endl;
        }
        return 0;
}

//***************************************************************
// The binarySearch function performs a binary search on an     *
// integer array. array, which has a maximum of size elements,  *
// is searched for the number stored in value. If the number is *
// found, its array subscript is returned. Otherwise, -1 is     *
// returned indicating the value was not in the array.          *
//***************************************************************

int binarySearch(const int array[], int size, int value)
{
        int first = 0,    // First array element
            last = size -1, // Last array element
            middle,       // Mid point of search
            position = -1; // Position of search value
        bool found = false; // Flag

        while (!found && first <= last) {
                middle = (first + last) / 2; // Calculate mid point
                if (array[middle] == value) // If value is found at mid
                {
                        found = true;
                        position = middle;
                }
                else if (array[middle] > value) // If value is in lower half
                        last = middle - 1;
                else
                        first = middle + 1; // If value is in upper half
        }
        return position;
}
