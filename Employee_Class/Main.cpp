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

  Employee emp2;
  emp2.setName("Mark Jones");
  emp2.setIdNumber(39119);
  emp2.setDepartment("IT");
  emp2.setPosition("Programmer");

  Employee emp3;
  emp3.setName("Joy Jones");
  emp3.setIdNumber(81774);
  emp3.setDepartment("Manufacturing");
  emp3.setPosition("Engineer");

  // Display the data for emp1
  cout << "Name: " << emp1.getName() << endl;
  cout << "ID Number: " << emp1.getIdNumber() << endl;
  cout << "Department: " << emp1.getDeparment() << endl;
  cout << "Position: " << emp1.getPosition() << endl << endl;;

  cout << "Name: " << emp2.getName() << endl;
  cout << "ID Number: " << emp2.getIdNumber() << endl;
  cout << "Department: " << emp2.getDeparment() << endl;
  cout << "Position: " << emp2.getPosition() << endl << endl;;

  cout << "Name: " << emp3.getName() << endl;
  cout << "ID Number: " << emp3.getIdNumber() << endl;
  cout << "Department: " << emp3.getDeparment() << endl;
  cout << "Position: " << emp3.getPosition() << endl << endl;;

  return 0;
}
