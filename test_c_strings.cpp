// Write a statement that:
// defines a Point structure variable named center
// assign 12 to the x member of center
// assign 7 to the y member of center
// display the contents of the x and y members of center


#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

// Build struct
struct Point
{
  int x;
  int y;
};

int main()
{
  Point center;  // center is a Point structure

  center.x = 12;
  center.y = 7;

  cout << "x = " << center.x << endl;
  cout << "y = " << center.y << endl;

  return 0;
}
