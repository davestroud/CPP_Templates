#include <iostream>
#include <iomanip>
using namespace std;


// Function Prototypes
void getScore(int, int, int, int, int);
void calcAverage(int, int, int, int, int);
//int findLowest();

int main()
{
  int num1, num2, num3, num4, num5;
  int average;
  getScore(num1,num2,num3,num4,num5);
  calcAverage(num1,num2,num3,num4,num5);
  cout << average << endl;

  return 0;
}

void getScore(int num1,int num2,int num3,int num4,int num5)
{
  cout << "Enter the five scores: ";
  cin >> num1 >> num2 >> num3 >> num4 >> num5;
}

void calcAverage(int num1,int num2,int num3,int num4,int num5)
{
  int average = (num1 + num2 + num3 + num4 + num5)/5;

}

/*
int findLowest()
{
  // find and return lowest of 5 scores passed to it
  // use if/else statement to figure this out

}


// Input Validation: Do not accept test scores lower than
// 0 or higher than 100
*/


/* if (n < 0 || n > 100)
   cout << "The test scores should be between 0 and 100";
*/
