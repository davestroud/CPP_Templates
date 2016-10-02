#include <iostream>
#include <string>
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

  string Numbers::tens [] = {"ten", "twenty", "thirty",
                              "forty","fifty", "sixty",
                              "seventy", "eighty","ninety"};

  string Numbers::hundred = "hundred";
  string Numbers::thousand = "thousand";


//******************************************
//          Numbers::print.                *
// Translate and print Numbers to English  *
//******************************************
void Numbers::print()
{

}


int main()
{
  // Create an instace of Numbers class
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
