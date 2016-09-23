// Specification file for the Employee class
#ifndef EMPLOYEE_H
#define EMPLOYEE_H

class Employee
{
private:
  string name;
  int idNumber;
  string department;
  string position;

public:
  // Constructors
  Employee(string, int, string, string);
  Employee(string, int);
  Employee();

  // Mutators
  void setName(string);
  void setIdNumber(int);
  void setDepartment(string);
  void setPosition(string);

  // Accessors
  string getName() const;
  int getIdNumber() const;
  string getDeparment() const;
  string getPosition() const;
};
#endif
