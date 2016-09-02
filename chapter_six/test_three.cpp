#include <iostream>
#include <iomanip>
using namespace std;
  
// Function prototype
void getScore(int &);
void calcAverage(int, int, int, int, int);
int findLowest(int, int, int, int, int);
         
int main()
{
         int testScr1, testScr2, testScr3, testScr4, testScr5;
         
         
         getScore(testScr1);
         getScore(testScr2);
         getScore(testScr3);
         getScore(testScr4);
         getScore(testScr5);
  
         calcAverage(testScr1, testScr2, testScr3, testScr4, testScr5);
  
  
system("PAUSE");
return 0;
}
  
//********************************************
//Definition of function getScore                                     *
//This function displays a message.                                 *
//********************************************
void getScore(int &score)
{
         cout << "Enter a test score\n";
         cin >> score;
         
         while (score < 0 || score > 100)
         {
                  cout << "Please enter a valid test score that between 0 to 100\n";
                  cin >> score;
         }
  
}
  
  
//*******************************************
//Definition of function calcAverage                             *
//This function displays a message.                               *
//*******************************************
void calcAverage(int s1, int s2, int s3, int s4, int s5)
{
         int sum;
         int      lowest;
         double average;
         
         
         lowest = findLowest(s1, s2, s3, s4, s5);
  
         sum = s1 + s2 + s3 + s4 + s5 - lowest;
         average = sum/4.0;
         
         cout << setw(4) << fixed << showpoint << setprecision(2);
         cout << "The avergae of the four highest scores are: " << average << endl;
}
  
  
//*******************************************
//Definition of function findLowest                               *
//This function displays a message.                               *
//*******************************************
int findLowest(int s1, int s2, int s3, int s4, int s5)
{
         int lowest = s1; 
         
         
    if (s2 < lowest )        
         {
                  lowest = s2;
         }
         else if (s3 < lowest)
         {
                  lowest = s3;
         }
         else if (s4 < lowest)
    {
                  lowest = s4;
         }
         else if (s5 < lowest)
         {
                  lowest = s5;
         }
  
         cout << "The lowest test score is: " << lowest << endl;
  
    return lowest;
}
