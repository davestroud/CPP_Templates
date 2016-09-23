// Implememtation file for the Employee class
#include "Employee.h"

Employee::Employee(string n, int id, string dept, string pos)
{
  name = n;
  idNumber = id;
  department = dept;
  position = pos;
}

Employee::Employee(string n, int id)
{
  name = n;
  idNumber = id;
  department = "";
  position = "";
}

Employee::Employee()
{
  name = "";
  idNumber = 0;
  department = "";
  position = "";
}
