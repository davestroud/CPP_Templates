#include <iostream>
#include <cctype>
#include <cstdio> // For the get the C getchar()function
#include <cstring>

using namespace std;

// function prototypes
bool testPassWord(char[]);
int countLetters(char*);
int countDigits(char*);

int main()
{
  char passWord[20];

  // Enter a password
  cout << "The password must have:\n"
        << "\tat least 6 characters,\n"
        << "\tat least one uppercase character,\n"
        << "\tat least one lowercase character,\n"
        << "\tat least one numeric digit\n"
        << "Enter a password: " << endl;
  cin.getline(passWord, 20);

  if (verifyPassword(password))
    cout << "The password is valid" << endl;

  return 0;
}


// Password must have at least 6 characters
// Password must have at least one uppercase character
// Password must have at lease one lowercase character
// Password must have at least one numeric digit
bool testPassWord(char custPass[])
{
  int numLetters, numDigits, length;

  length = strlen(custPass);
  numLetters = countLetters(custPass);
  numDigits = countDigits(custPass);
  if (numLetters < 6 && numDigits == 1)
    return true;
  else
    return false;
}


// Press any key to continue
