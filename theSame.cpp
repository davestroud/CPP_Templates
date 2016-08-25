// This program tests two C-strings for equality
// using the strcmp function

#include <iostream>
#include <cstring>

using namespace std;

int main()

{
  // Two arrays for two strings
  char str1[25];
  char str2[25];

  cout << "Please input the first name" << endl;
  cin.getline(str1,25);
  cout << "Please enter the second name" << endl;
  cin.getline(str2,25);

// Compare the strings for equality with strcmp
if (strcmp(str1, str2) == 0)
  cout << "They are the same:\n";
else
  cout << "They are not the same:\n";

  return 0;
}
