#include <iostream>
#include <cstring>

using namespace std;

int main()

{
  char str1[25];
  char str2[25];

  cout << "Please input the first name" << endl;
  cin.getline(str1,25);
  cout << "Please enter the second name" << endl;
  cin.getline(str2,25);

  cout << endl << "The names are as follows: " << endl;

  if (strcmp(str1,str2) == 0)
  {
    cout << str1 << endl << str2 << endl;
    cout << "They are the same!" << endl;
  }
  else if (strcmp(str1, str2) < 0)
    cout << str1 << endl << str2 << endl;

  else
    cout << str2 << endl << str1 << endl;

  return 0;
}
