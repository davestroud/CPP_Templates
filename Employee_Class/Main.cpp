#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
  Employee emp1;
  emp1.setName("Susan Meyers");
  emp1.setIdNumber(47899);
  emp1.setDepartment("Accounting");
  emp1.setPosition("Vice President");

  // Display the data for emp1
  cout << "Name: " << emp1.getName() << endl;
  cout << "ID Number: " << emp1.getIdNumber() << endl;
  cout << "Department: " << emp1.getDeparment() << endl;
  cout << "Position: " << emp1.getPosition() << endl;

  return 0;
}
