// John David Stroud
// CS2255 Computer Science II
// david@davidstroud.me
// https://github.com/davestroud

/* This program dynamically allocates an array large enough to hold a user
    defined number of test scores.  Once all scores are entered, the array should
    be passed to a function that sorts them in ascending order.  Another
    funcion should be called that calculates the average score.  The program
    should display the sorted list of scores and averages with appropriate
    headings.  Pointer notation is used, rather than array notation whenever possible.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double *grades = nullptr,       // To dynamically allocate an array
          total = 0.0,            // Accumlator
          average;                // To hold the grade average
  int numGrades,                  // To hold the number of grades
      count;                      // Counter variable


// Get the number of test scores
cout << "How many test scores will you enter? ";
cin >> numGrades;

// Do not accept a negative number of test scores
while (numGrades <= 0) // checks for the legal value
{
  cout << "There must be at least one grade.  Please re-enter.\n";
  cout << "How many grades will be processed? " << endl;
  cin >> numGrades;
}

// Do not accept a negative number for a test score


// Dynamically allocate an array large enough
// to hold the test scores
grades = new double[numGrades];

// Get the actual test scores
cout << "Enter the test scores below.\n";
for (count = 0; count < numGrades; count++)
{
  cout << "Grade " << (count + 1) << ": ";
  cin >> grades[count];
}

//  Calculate the total scores
for (count = 0; count < numGrades; count++)
{
  total += grades[count];
}

// Calculate the average score
average = total / numGrades;

// Display the results
cout << fixed << showpoint << setprecision(2);
cout << "Average Grade: " << average <<endl;


// Free dynamically allocated memory
delete [] grades;
grades = nullptr;     // Makes grades a null pointer


return 0;

}
