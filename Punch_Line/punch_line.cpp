// Punch Line: Write a program that prints a joke and its punch line
// from two different files.

// David Stroud - CS 2255 Week 4 Programming Exercise

#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;

// Function Prototypes
bool jokeFunction(fstream &, string);
void showContents(fstream &);

// Open the two file and call the functions
int main(int argc, char const *argv[]) {

  fstream dataFile;         // File stream object

  if (jokeFunction(dataFile, "joke.txt"))
  {
    showContents(dataFile);
    dataFile.close();
  }
  else
    cout << "File open error!" << endl;

  return 0;
}


//************************************************************************
// joke_file function: Read and display each line of the file passed
//************************************************************************
bool jokeFunction(fstream &file, string name)
{
  file.open(name.c_str(), ios::in);
  if (file.fail())
      return false;
  else
      return true;
}

//*************************************************************************
// punchline_file function: Display only the last line of the file passed
//*************************************************************************
void showContents(fstream &file)
{
  string line;

  while (file >> line)
  {
    cout << line << endl;
    getline(file);
  }
}
