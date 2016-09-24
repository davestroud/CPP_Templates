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

// Mutator, or setter functions
void Employee::setName(string n)
  { name = n; }

void Employee::setIdNumber(int id)
  { idNumber = id; }

void Employee::setDepartment(string dept)
  { department = dept; }

void Employee::setPosition(string pos)
  { position = pos; }


// Accessor, or getter functions
string Employee::getName() const
  { return name;}

int Employee::getIdNumber() const
  { return idNumber; }

string Employee::getDeparment() const
  { return department;}

string Employee::getPosition() const
  { return position; }
