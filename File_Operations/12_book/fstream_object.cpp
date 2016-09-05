// This program uses an fstream object to write data to a file.
#include <iostream>
#include <fstream>
using namespace std;

int main(int argc, char const *argv[])
{
  fstream dataFile;

  cout << "Opening file...\n";
  dataFile.open("demofile.txt", ios::out);  // Open for output
  std::cout << "Now writing data to the file" << std::endl;
  dataFile << "John David\n";        // write line 1
  dataFile << "Spencer\n";        // write line 2
  dataFile << "Wilson\n";       // write line 3
  dataFile << "Jennifer\n";        // write line 4
  dataFile.close();             // Close the file
  cout << "Done\n";
  return 0;
}
