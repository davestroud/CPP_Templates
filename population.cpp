/*  show the population growth of Prairievlille
at 20 year intervals over the past 100 years. */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // open the file
  ifstream inFile;
  int value1, value2, value3, value4, value5, value6;


  inFile.open("People.txt");
  cout << "PRAIRIEVILLE POPULATION GROWTH:" << endl;
  cout << " (each * represents 1,000 people)" << endl;

  // Write names to each file
  inFile >> value1;
  cout << "1900\t" << value1 << endl;
  inFile >> value2;
  cout << "1920\t" << value2 << endl;
  inFile >> value3;
  cout << "1940\t"<<  value3 << endl;
  inFile >> value4;
  cout << "1960\t" << value4  << endl;
  inFile >> value5;
  cout << "1980\t" << value5 << endl;
  inFile >> value6;
  cout << "2000\t" << value6 << endl;


  if (value1 == 5000)
    cout << "*****" << endl;
  
  // close the file
  inFile.close();

  return 0;
}




