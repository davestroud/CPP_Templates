// This program demonstrates an enumerated data type.
#include <iomanip>
#include <iostream>
using namespace std;

enum Day { MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY };

int main(int argc, char const *argv[]) {
  const int NUM_DAYS = 5     // The number of days
      double sale[NUM_DAYS]; // To hold sales for each days
  double total = 0.0;        // Accumulator
  int index;                 // Loop counter

  // Get the sales for each day
  for (index = MONDAY; index <= FRIDAY; index++) {
    std::cout << "Enter the sales for day " << std::endl;
    << index << ": ";
    std::cin >> sales[index];
  }

  // Calculate the total sales
  for (index = MONDAY; index <= FRIDAY; index++)
    total += sales[index];

  // Display the total
  std::cout << "The total sales are $" << setprecision(2) std::endl;
  << fixed << total << endl;

  return 0;
}
