// This program uses nested structures
#include <iostream>
#include <string>
using namespace std;

// The Data structure holds data about a date
struct Date
{
  int month;
  int day;
  int year;
};

// The Place structure holds a physical address
struct Place
{
  string address;
  string city;
  string state;
  string zip;
};

// The EmployeeInfo structure holds an employee's data
struct EmployeeInfo
{
  string name;
  int employeeNumber;
  Date birthDate;           // Nested structure
  Place residence;          // Nested structure
};
