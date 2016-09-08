// This program  asks the user for a file name. The file is
// opened and its contents are displayed on the screen.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(int argc, char const *argv[]) {
  string fileName;        // To hold the file name
  char ch;                // To hold a character
  fstream file;           // File stream object

  // Get the file name
  cout << "Enter a file name: ";
  cin >> fileName;

  // Open the file.
  file.open(fileName, ios::in);

  // If the file was succesfully opened, continue.
  if (file)
  {
    // Get the character from the file.
    file.get(ch);

    // While the last read operation was
    // successful, continue
    while (file)
    {
      // Display the last characeter read.
      cout << ch;

      // Read the last character
      file.get(ch);
    }

    // Close the file.
    file.close();
  }
  else
  cout << fileName << " could not be opened.\n";
  return 0;
}
