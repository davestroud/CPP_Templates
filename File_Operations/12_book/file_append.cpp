// This program writes data to a file, closes the file,
// then reopens the file and appends more data.
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
  ofstream dataFile;

  cout << "Opening file...\n";
  // Open the file in output mode
  dataFile.open("demofile.txt", ios::out);
  cout << "Now writing data to the file.\n";
  dataFile << "Stroud\n";       // write line 1
  dataFile << "Kramer\n";       // write line 2
  cout << "Now closing the file.\n";
  dataFile.close();             // close the file

  cout << "Opening the file again...\n";
  // Open the file in append mode
  dataFile.open("demofile.txt", ios::out | ios::app);
  cout << "Writing more data to the file.\n";
  dataFile << "Middleton\n";      // write line 3
  dataFile << "Cobb\n";           // write line 4
  cout << "Now closing the file.\n";
  dataFile.close();               // close the file

  cout << "Done\n";
  return 0;
}
