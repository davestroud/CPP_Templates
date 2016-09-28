// Chapter 14, Programming Challenge 2: Day of the Year
#include <iostream>
#include <string>
using namespace std;

class DayOfYear
{
private:
   int day;

public:
   static int daysAtEndOfMonth[];
   static string monthName[];
   void print();
   void setDay(int day){this->day = day;}
};

int DayOfYear::daysAtEndOfMonth[] = { 31, 59, 90,
                                      120, 151, 181,
                                      212, 243, 273,
                                      304, 334, 365 };

string DayOfYear::monthName[]= { "January", "February",
                                 "March", "April",
                                 "May", "June",
                                 "July", "August",
                                 "September", "October",
                                 "November", "December" };

//***************************************
//          DayOfYear::print.           *
// Convert and print day of year        *
//***************************************
void DayOfYear::print()
{
    int month = 0;

    while (daysAtEndOfMonth[month] < day)
         month = (month + 1) % 12;

    // DaysAtEndOfMonth >= day
    if (month == 0)
      cout << "\nJanuary " << day << endl <<endl;
    else
    {
       cout << endl << monthName[month] <<  " "
            << day - daysAtEndOfMonth[month-1]
            << endl << endl;
    }
}


int main()
{
   // Create an instance of the DayOfYear class
   DayOfYear dayOfYearObj;

   int day; // To hold the day

   // Display the purpose of the program.
    cout << "This program converts a number \n"
         << "into a string representing the \n"
         << "month and day.\n\n";

    // Get the day as input from the user.
    cout << "\nEnter a whole number between 1 and 365: ";
    cin >> day;

    // Set the day.
    dayOfYearObj.setDay(day);

   // Display the object.
    dayOfYearObj.print();

    return 0;
}
