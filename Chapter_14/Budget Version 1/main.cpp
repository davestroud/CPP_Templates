// This program demonstrates a static class member variable.
#include <iostream>
#include <iomanip>
#include "Budget.h"

int main(int argc, char const *argv[]) {
  int count;                        // Loop counter
  const int NUM_DIVISIONS = 4;      // Number of divisions
  Budget divisions[NUM_DIVISIONS];  // Array of Budget objects

  // Get the budget requests for each division
  for (count = 0; count < NUM_DIVISIONS; count++)
  {
    double budgetAmount;
    std::cout << "Enter the budget request for division";
    std::cout << (count + 1) << ": ";
    std::cin >> budgetAmount;
    divisions[count].addBudget(budgetAmount);
  }

  // Display the budget requests and the corporate budget.
  std::cout << "\nHere are the division budget requests:\n";
  for (count = 0; count < NUM_DIVISIONS; count++)
  {
    std::cout << "\tDivision " << (count + 1) << "\t$ ";
    std::cout << divisions[count].getDivisionBudget() << std::endl;
  }
  std::cout << "\tTotal Budget Requests:\t$";
  std::cout << divisions[0].getCorpBudget() << std::endl;

  return 0;
}
