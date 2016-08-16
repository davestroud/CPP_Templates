#include <iostream>
#include <fstream>
using namespace std;

int main() 
  {
    const int ARRAY_SIZE = 7;  // Number of employees
    int empId [ARRAY_SIZE];   // Each employees's id number
    double payRate;            // array of seven doubles to hold hourly pay rate
    double wages;               // array of seven doubles to hold gross wages
    int count;                 // Loop counter variable
    ifstream inputFile;       //  Input file stream object
    
    // Open the file
    inputFile.open("seven_numbers.txt");

    // Read the numbers from the file into the array
    while (count < ARRAY_SIZE && inputFile >> empId[count])
      count++;

    // Close the file
    inputFile.close();

    // Display the numbers read:
    cout << "The numbers are: " << endl;
    for (count = 0; count < ARRAY_SIZE; count++)
      cout << empId[count] << " " << endl;
    // cout << endl;
    return 0;
  }


    
