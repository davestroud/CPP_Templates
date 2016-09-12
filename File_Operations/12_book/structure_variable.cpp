// This program uses a structure variable to store a record to a file.
#include <iostream>
#include <fstream>
using namespace std;

// Array sizes
const int NAME_SIZE = 51, ADDR_SIZE = 51, PHONE_SIZE = 14;

// Declare a structure for the record.
struct Info
{
  char name[NAME_SIZE];
  int age;
  char address1[ADDR_SIZE];
  char address2[ADDR_SIZE];
  char phone[PHONE_SIZE];
};

int main(int argc, char const *argv[]) {
  Info person;    // To hold information about a person
  char again;     // To hold Y or N

  // Open a file for binary output.
  fstream people("people.dat", ios:: out | binary);

  do
  {
    // Get the data about a person.
    cout << "Enter the following data about a "
          << "person:\n";
    cout <<"Name: ";
    cin.getline(person.name, NAME_SIZE)
  }



  return 0;
}
