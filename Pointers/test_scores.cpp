#include <iostream>
#include <iomanip>
using namespace std;

// Function prototypes
void sortIt (float* grades, int numGrades);
void displayGrades(float* grades, int numGrades);

int main()
{
  float* grades = nullptr;      // To dynamically allocate an array
  float total = 0;              // Total of all grades
  float average;                // Average of all grades
  int numGrades;                // The number of grades to be processed
  int count;                    // Loop counter

// Get the number of test scores
cout << fixed << showpoint << setprecision(2);
cout << "How many test scores will you enter? " << endl;
cin >> numGrades;

// Check for a legal value of grades
while (numGrades <= 0)
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
for (count = 0; count < numGrades; count++)
{
  cout << "Grade" << (count + 1) << ": " << endl;
  cin >> grades[count];
  total = total + grades[count];
}


// Calculate the average score
average = total / numGrades;
cout << "Average score: " << average << "%" << endl;

// Call sorting algorithm
sortIt(grades,numGrades);
cout << "Here are the scores in ascending order" << endl;
for (int count1 = 0;  count1 < numGrades;  count1++)

   cout << grades[count1] << endl;

// Free dynamically allocated memory
delete [] grades;
grades = nullptr;   // Makes grades a null pointer

return 0;
}

// Sorting algorithm to sort numbers in an array
void sortIt(float * grades, int size)
{
	int swap_occured = 1;
	int bottom = size-1;
    float temp;
	while (swap_occured)
    {
	  swap_occured = 0;
	  for (int pos = 0;  pos < bottom; pos++)
		if (grades[pos] > grades[pos + 1])
		{
			temp = grades[pos];
			grades[pos] = grades[pos + 1];
			grades[pos + 1] = temp;
			swap_occured = 1;
		}
		bottom--;
	}
}

// Display grades
void displayGrades(float* grades, int numGrades)
{

}
