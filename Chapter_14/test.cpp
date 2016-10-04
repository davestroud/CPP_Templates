#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Numbers
{
private:
  int number;

public:
  static string lessThan20[];
  static string tens[];
  static string hundred;  // Does this string need to be static? Why?
  static string thousand; // Does this string need to be static? Why?
  void print();
  void setNumber(int number){this->number = number;} // Should I put {this->number = number;} Why?
};

  string Numbers::lessThan20 [] = {"zero", "one", "two", "three",
                        "four", "five", "six", "seven",
                        "eight", "nine", "ten", "eleven",
                        "twelve", "thirteen", "fourteen",
                        "fifteen", "sixteen", "seventeen",
                        "eighteen", "nineteen" };

  string Numbers::hundred = "hundred";
  string Numbers::thousand = "thousand";


//******************************************
//          Numbers::print.                *
// Translate and print Numbers to English  *
//******************************************
void Numbers::print()
{
  int th = (number % 10000) / 1000;   // Get the thousandth number
  int hd = (number % 1000) / 100;     // Get the hundredth number
  int tn = (number % 100) / 10;       // Get the tenth number
  int ones = (number % 10) / 10;      // Get the ones

  if (th >= 1 && th <= 9) // One thousand through nine thousand
      cout << lessThan20[th] << " " << thousand << " ";
  else if (th == 0)
      cout << "";

  if (hd >= 1 && hd <= 9)
      cout << lessThan20[hd] << " " << hundred << " ";
  else if (hd == 0)
      cout << "";

  if (tn == 1)
    cout << lessThan20[number % 100] << " ";
  else if (tn >= 2 && tn <= 9)
    cout << lessThan20[tn + 18] << " ";
  else if (tn == 0) // Less than ten
  cout << "";

  if (number % 10 == 0)
    cout << "";
  else
    cout << lessThan20[ones];

}

int main()
{
  // Create an instance of Numbers class
  Numbers numbersObj;   // Is it necessary to put the obj?  If so, why

  int number;       // To hold the number

  // Display the purpose of the program
  cout << "This program translates whole dollar amounts into words \n"
      << "for the purpose of writing checks.\n\n";

  // Get the number as input from the user
  cout << "\nEnter an amount to be translated into words:(0-9999) ";
  cin >> number;

  // Set the number
  numbersObj.setNumber(number);

  // Display the object.
  numbersObj.print();

  return 0;
}
