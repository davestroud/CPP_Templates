#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include "ProductionWorker.h"

class Employee
{
private:
  string EmployeeName;
  int EmployeeNumber;
  string HireDate;
}
public:
  Employee(string name, int numbers, string hDate)

  void setEmployeeName(string name)
  void setEmployeeNumber(int number)
  void setHireDate(string hDate)
