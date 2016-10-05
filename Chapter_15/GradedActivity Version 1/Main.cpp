// This program demonstrates the GradedActivity class.
#include <iostream>
#include "GradedActivity.h"
using namespace std;

int main(int argc, char const *argv[]) {
  double testScore;     // To hold a test score

  // Create a GradedActivity object for the test.
  GradedActivity test;

  // Get the numeric test score from the user.
  cout << "Enter your numeric test score: ";
  cin >> testScore;

  // Store the number score in the test object.
  test.setScore(testScore);

  // Display the letter grade for the test.
  cout << "The grade for the test is: "
    << test.getLetterGrade() << endl;

  return 0;
}
