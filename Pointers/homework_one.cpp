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

// function prototypes
void sortIt(float* grades , int numGrades);

int main()
{
  float *grades = nullptr;        // To dynamically allocate an array
  float total = 0.0;             // Accumlator
  float average;                 // To hold the grade average
  int numGrades;                  // To hold the number of grades
  int count;                      // Counter variable


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
grades = new float(numGrades);
if (grades == NULL)
{
  cout << "Error allocating memory!\n";
  return -1;
}

// Dynamically allocate an array large enough
// to hold the test scores
grades = new float[numGrades];

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

sortIt(grades, numGrades);
for (count = 0; count < numGrades; count++){
  cout<<"grade" <<(count+1)<<": " << grades[count] << endl;
}


// Free dynamically allocated memory
sortIt(grades, numGrades);
delete [] grades;
grades = nullptr;     // Makes grades a null pointer

return 0;

}

void sortIt(float * grades, int numGrades){
  bool exchanges;
  do{
    exchanges = false;
    for (int i = 0; i < numGrades -1; i++){
      if (grades[i] > grades[i + i]){
        float temp = grades[i];
        grades[i] = grades[i+1];
        grades[i+1] = temp;
        exchanges = true;
      }
    }
  }while(exchanges);
}
