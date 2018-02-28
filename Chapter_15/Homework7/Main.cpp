#include <iostream>
#include <iomanip>
#include <string>
#include "Employee.h"


int main(int argc, char const *argv[]) {
  // Create ProductionWorker object
  ProductionWorker worker("David Stroud", 1234, "08/26/2016", 1, 22.50);

  // Display the values stored in the object
  std::cout << "Name: " << worker.getEmployeeName() << std::endl;
  std::cout << "Employee Number: " << worker.getEmployeeNumber() << std::endl;
  std::cout << "Hire Date: " << worker.getHireDate() << std::endl;
  std::cout << "Shift Number: " << worker.getShift() << std::endl;
  std::cout << "Hourly Pay Rate: $" << setprecision(2) << fixed
            << worker.getHourlyPayRate() << std::endl;
  return 0;
}
