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

int main()
{
  // Define a structure variable to hold info about the manager
  EmployeeInfo manager;

  // Get the manangers name and employee number
  cout << "Enter the manager's name: ";
  getline(cin, manager.name);
  cout << "Enter the manager's employee number: ";
  cin >> manager.employeeNumber;

  // Get the manager's birth date
  cout << "Now enter the manager's data of birth:\n";
  coutt << "Month (up to 2 digits): ";
  cin >> manager.birthDate.day;
  cout << "Year: ";
  cin >> manager.birthDate.year;
  cin.ignore();   // Skip the remaining newline character


  // Get the manager's residence information


  //Display the information just entered





  return 0;

}
