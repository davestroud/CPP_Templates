/* John David Stroud - CS-2250
This program calculates the average of a group of test scores, 
where the lowest score in the group is dropped.*/ 

#include <iostream>
#include <iomanip>
using namespace std;

// Function Prototypes
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);

int main()
{
  int value1, value2, value3, value4, value5;

  getScore(value1);
  getScore(value2);
  getScore(value3);
  getScore(value4);
  getScore(value5);

  calcAverage(value1, value2, value3, value4, value5);

  return 0;

}

// Asks the users for a test score
void getScore(int &score)
{
  cout <<  "Enter Score: " << endl;
  cin >> score;

  // While statement is used to validate only number 0 to 100.
  while (score < 0 || score > 100)
    {
      cout << "Please enter a score between 0 and 100: " << endl;
      cin >> score;
    }
}

// Calculates and displays the average of the four highest scores.
void calcAverage(int num1, int num2, int num3, int num4, int num5)
{
  int sum;
  int lowest;
  double average;

  lowest = findLowest(num1, num2, num3, num4, num5);

  sum = num1 + num2 + num3 + num4 + num5 - lowest;
  average = sum / 4.0;

  cout << setw(4) << fixed << showpoint << setprecision(2);
  cout << "The average of the four highest is: " << average << endl;   
}

// Finds and returns the lowest of 5 scores passed to the function
int findLowest(int num1, int num2, int num3, int num4, int num5)
{
  int lowest = num1;

  if (num2 < lowest)
    {
      lowest = num2;
    }
  else if (num3 < lowest)
  {
    lowest = num3;
  }
  else if (num4 < lowest)
    {
      lowest = num4;
    }
  else if (num5 < lowest)
    {
      lowest = num5;
    }

  cout << "The lowest test score is: " << lowest << endl;

  return lowest;    
}
