// This program totals and averages the sales figures for any
// number of days.  The figures are stored dynamically
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  double *sales = nullptr,    // To dynamically allocate an array
          total = 0.0,        // Accumlator
          average;            // To hold average sales
  int numDays,                // To hold the number of days of sales
      count;                  // Counter variable

// Get the number of days of sales
cout << "How many days of sales figures do you wish ";
cout << "to process? ";
cin >> numDays;

// Dynamically allocate an array large enough
// to hold that many days of sales amounts
sales - new double[numDays];

// Get the sales figures for each day
cout << "Enter the sales figures below.\n";
for (count = 0; count < numDays; count++)
{
  total += sales[count];
}

// Calculate the the total sales





//Calculate the average sales per day






// Display the results






// Free dynamically allocated memeory




}
