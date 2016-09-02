// four highest scores average.cpp : main project file.

#include <iomanip>
#include <iostream>

using namespace std;


void showDub(int&);


int main() 
{
  int x = 2;

  cout << x << endl;
  showDub(x);
  cout << x << endl;

  return 0;
}

void showDub(int&  num)
{
  num = 0;
  cout << num << endl;
}

