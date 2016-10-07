#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "ProductionWorker.h"

class Employee
{
private:
  string employeeName;
  int employeeNumber;
  string hireDate;
public:
  // Constructor
  Employee(string name, int number, string hDate)
  {
    employeeName = name;
    employeeNumber = number;
    hireDate = hDate
  }

  // Mutators
  void setEmployeeName(string name)
  { employeeName = name; }

  void setEmployeeNumber(int number)
  { employeeNumber = number; }

  void setHireDate(string hDate)
  { hireDate = hDate; }

  // Accessors
  string getEmployeeName()
  { return employeeName; }

  int getEmployeeNumber()
  { return employeeNumber; }

  string setHireDate()
  { return hireDate; }
};
#endif
