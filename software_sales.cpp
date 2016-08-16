#include <iostream>
#include <iomanip>
using namespace std;

void doSomething()
{
  int x = 5; // Error!  Not Accessible
}

int main()
{
  int x =4;
  cout << x << endl;
  {
    int x = 2;
    cout << x << endl;
  }
  doSomething();
  cout << x << endl;
    
  return 0;
}
