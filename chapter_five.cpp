/* John David Stroud CS2250
 Show the population growth of Prairievlille
 at 20 year intervals over the past 100 years.
 One * represents 1,000 people. Data can be found 
 at the People.txt file. */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  ifstream inFile;
  int value1, value2, value3, value4, value5, value6;

  // open the file
  inFile.open("People.txt");
  cout << "PRAIRIEVILLE POPULATION GROWTH:" << endl;
  cout << " (each * represents 1,000 people)" << endl;

  // Write names to each file
  inFile >> value1;
  cout << "1900\t";
  if (value1 >= 5000 || value1 < 6000)
    cout << "*****" << endl;
  inFile >> value2;
  cout << "1920\t";
  if (value2 >= 7000 || value2 < 8000)
    cout << "*******" <<endl;
  inFile >> value3;
  cout << "1940\t";
  if (value3 >= 9000 || value3 < 10000)
    cout << "*********" << endl;
  cout << "1960\t";
  if(value4 >= 11000 || value4 < 12000)
    cout << "***********" << endl;
  inFile >> value5;
  cout << "1980\t";
  if (value5 >= 13000 || value5 < 14000)
    cout << "*************" << endl;
  inFile >> value6;
  cout << "2000\t";
  if (value6 <= 16000 || value6 < 16000)
    cout << "****************" << endl;

   // close the file
  inFile.close();

  return 0;
}

