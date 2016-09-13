#include <iostream>
#include <fstream>
#include <string>
using namespace std;

// Function prototypes
  void readJoke(fstream &);
  void readPunchline(fstream &);

int main()
{
  fstream file;
  string fileName;
  string fileName2;

  cout << "Enter the name of the file holding the joke: <joke.txt>\n";
  cin >> fileName;
  file.open(fileName, ios::in);
  readJoke(file);
  file.close();

  cout << "Enter the name of the file holding the punch line: <punchline.txt\n";
  cin >> fileName2;
  file.open(fileName2, ios::in);
  readPunchline(file);
  file.close();

  return 0;
}




// Read_Joke function: Read and display each line of joke file
void readJoke(fstream &file)
{

  string fileName;
  while (getline(file, fileName))
  {
    cout << fileName << endl;
  }

}



// punchline_function: Read and display last line of punchline file
void readPunchline(fstream &file)
{
  string fileName2;
  while (getline(file, fileName2))
  {
    cout << fileName2 << endl;
  }
}
