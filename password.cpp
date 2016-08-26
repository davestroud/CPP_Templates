#include <iostream>
#include <cctype>
#include <cstdio> // For the get the C getchar()function
#include <cstring>

using namespace std;

// function prototypes
bool verifyPassWord(char[]);
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

  if (verifyPassWord(passWord))
    cout << "The password is valid" << endl;

  return 0;
}


// Password must have at least 6 characters
// Password must have at least one uppercase character
// Password must have at lease one lowercase character
// Password must have at least one numeric digit
bool verifyPassWord(char custPass[])
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

// counts the number of letters, both capital and lowercase in the string
int countLetters(char *strPtr)
{
  int occurs = 0;

  while(*strPtr != '\0')
  {
    if (isalpha(*strPtr))
      occurs++;
    strPtr++;
  }
  return occurs;
}

// counts the number of digits in the string
int countDigits(char *strPtr)
{
  int occurs = 0;

  while(*strPtr != '\0')
  {
    if (isdigit(*strPtr))
      occurs++;
    strPtr++;
  }
  return occurs;
}





// Press any key to continue
