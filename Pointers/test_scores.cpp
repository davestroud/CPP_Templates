#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void sortIt (float* grades, int numGrades);
void displayGrades(float* grades, int numGrades);

int main()
{
  float* grades = nullptr;      // To dynamically allocate an array
  float numGrades;              // To hold the number of grades
  int numGrades;                // The number of grades to be processed
  int count;                    // Loop counter


// Get the number of test scores
cout << fixed << showpoint << setprecision(2);

cout << "How many test scores will you enter? " << endl;
cin >> numGrades;

// Check for a legal value of grades
while (numGrades < = 0)
{
  cout << "Your number cannnot be negative.\n";
  cout << "Enter another number: " << endl;
  cin >> numGrades;
}



// Do not accept a negative number for a test score






// Dynamically allocate an array large enough
// to hold the test scores
grades = new float[numGrades];  // Allocation memory for array 
if (grades == NULL)
{
  cout << "Error allocating memory!\n";
  return -1;
}

// Get the test scores
cout <<  "Enter the grades below\n";






// Calculate the total scores





// Calculate the average score





// Display the results




// Free dynamically allocated memory
delete [] grades;
grades = nullptr;   // Makes grades a null pointer

return 0;


}
// Sorting algorithm to sort numbers in an array





// Display grades
