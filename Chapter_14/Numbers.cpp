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
  static string hundred;
  static string thousand;
  void print();
  void setNumber(int number){this->number = number;}
};

  string Numbers::lessThan20 [] = {"zero", "one", "two", "three",
                        "four", "five", "six", "seven",
                        "eight", "nine", "ten", "eleven",
                        "twelve", "thirteen", "fourteen",
                        "fifteen", "sixteen", "seventeen",
                        "eighteen", "nineteen",
                        "twenty", "thirty", "forty", "fifty",
                        "sixty", "seventy", "eighty", "ninety" };

  string Numbers::hundred = "hundred";
  string Numbers::thousand = "thousand";


//******************************************
//          Numbers::print.                *
// Translate and print Numbers to English  *
//******************************************
void Numbers::print()
{
  int th = (number % 10000) / 1000; // Get thousandth number
    int hd = (number % 1000) / 100;   // Get hundredth number
    int tn = (number % 100) / 10;     // Get tenth number
    int ones = number % 10;           // Get the ones number


    if (th >= 1 && th <= 9) // One thousand through nine thousand
        cout << lessThan20[th] << " " << thousand << " ";
    else if (th == 0)       // Less than one thousand
        cout << "";

    if (hd >= 1 && hd <= 9) // One hundred through nine hundred
        cout << lessThan20[hd] << " " << hundred << " ";
    else if (hd == 0)       // Less then one hundred
        cout << "";

    if (tn == 1) // Ten through nineteen
        cout << lessThan20[number % 100] << " " ;
    else if (tn >= 2 && tn <= 9)  // Number = twenty through ninety nine
        cout << lessThan20[tn + 18] << " ";
    else if (tn == 0) // Less than ten
        cout << "";

    if (number % 10 == 0) // Don't display ones when number = 20,30,40.....9000
        cout << "";
    else
        cout << lessThan20[ones];
}

int main()
{
  // Create an instance of Numbers class
  Numbers numbersObj;

  while(true) {
  int number;       // To hold the number

  // Display the purpose of the program
  cout << "This program translates whole dollar amounts into words \n"
      << "for the purpose of writing checks.\n\n";

  // Get the number as input from the user
  cout << "\nEnter an amount to be translated into words:(0-9999) ";
  cin >> number;

  while (number < 0 || number > 9999){
    cout << "You entered an Invalid number:" << endl;
    cout << "Please enter a number between 0 and 9999: ";
    cin >> number;
  }

  // Set the number
  numbersObj.setNumber(number);

  // Display the object.
  numbersObj.print();
  cout << endl << endl;
}

  return 0;
}
