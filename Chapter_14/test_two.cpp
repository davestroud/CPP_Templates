// Tommy Nguyen
// Programming Challenge 14-1
// This program takes an integer entered by the user and translate it to written form.

#include <iostream>

using namespace std;

class Numbers
{
    private:
    int number;
    static string stringArray[];
    static string hundred;
    static string thousand;

    public:
    Numbers();
    Numbers(int);

    void print();
};

string Numbers::stringArray[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine",
                                "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen",
                                "seventeen", "eighteen", "nineteen",
                                "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninety"};
string Numbers::hundred = "hundred";
string Numbers::thousand = "thousand";

int main()
{
    int input;

    while(true){
    cout << "Enter a positive number between 0 and 9999 to translate: ";
    cin >> input;

    // Loop if the user input is out of range
    while (input < 0 || input > 9999) {
        cout << "Invalid. " << endl;
        cout << "Enter a positive number between 0 and 9999 to translate: ";
        cin >> input;
    }

    Numbers num(input);

    num.print();
    cout << endl;

    } // Ends first while loop

    return 0;
}

Numbers::Numbers(int num) {
    number = num;
 }

void Numbers::print() {

    int th = (number % 10000) / 1000; // Get thousandth number
    int hd = (number % 1000) / 100;   // Get hundredth number
    int tn = (number % 100) / 10;     // Get tenth number
    int ones = number % 10;           // Get the ones number


    if (th >= 1 && th <= 9) // One thousand through nine thousand
        cout << stringArray[th] << " " << thousand << " ";
    else if (th == 0)       // Less than one thousand
        cout << "";

    if (hd >= 1 && hd <= 9) // One hundred through nine hundred
        cout << stringArray[hd] << " " << hundred << " ";
    else if (hd == 0)       // Less then one hundred
        cout << "";

    if (tn == 1) // Ten through nineteen
        cout << stringArray[number % 100] << " " ;
    else if (tn >= 2 && tn <= 9)  // Number = twenty through ninety nine
        cout << stringArray[tn + 18] << " ";
    else if (tn == 0) // Less than ten
        cout << "";

    if (number % 10 == 0) // Don't display ones when number = 20,30,40.....9000
        cout << "";
    else
        cout << stringArray[ones];
}
