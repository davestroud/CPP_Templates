#include <iostream>
#include <iomanip>
using namespace std;

// This program uses a structure to hold data about a rectangle

// Structure declaration
struct rectangle
{
  float length;
  float width;
  float area;
  float perimeter;
};

int main()
{
  // Declare a rectangle variable named box
  rectangle box;

  // Read in the length member of box
  cout << "Enter the length of a rectangle: ";
  cin >> box.length;

  //Read in the width member of box
	cout << "Enter the width of a rectangle: ";
  cin >> box.width;
  cout << endl << endl;

	box.area = box.length * box.width;               // compute area of box
  box.perimeter = 2 * box.length + 2 * box.width; // computer perimeter of box


	cout << fixed << showpoint << setprecision(2);

  cout << "The area of the rectangle is " <<box.area << endl;
    cout << "The perimeter of the rectangle is " << box.perimeter << endl;
  if (box.length == box.width)
    cout << "The rectangle is square" << endl;
  else
    cout << "The rectangle is not a square" << endl;

	return 0;
}
