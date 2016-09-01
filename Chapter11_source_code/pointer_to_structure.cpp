// This program demonstrates a function that uses a
// pointer to a structure variable as a parameter

// Build struct
struct Student
{
  string name;            // Students name
  int idNum;              // Student ID number
  int creditHours;        // Credit hours enrolled
  double gpa;             // Current GPA
}

void getData(Student *);    // Function prototype

int main()
{
  Student freshman;

  // Get the student data
  cout << "Enter the folowing student data:\n";
  getData(&freshman);       // Pass the address of freshman
  cout << "\nHere is the student data you entered:\n";

  // Now display the data stored in freshman
  cout << setprecision(3);
  cout << "Name: " << freshman.name << endl;
  cout << "ID Number: " << freshman.idNum << endl;
  cout << "Credit Hours: " << freshman.creditHours << endl;
  cout << "GPA: " << freshman.gpa << endl;
  return 0;
}

//***********************************************************
// Definition of function getData. Uses a pointer to a      *
// Student structure variable. The user enters student      *
// information, which is stored in the variable.            *
//***********************************************************
