#include<iostream>
#include<iomanip>

using namespace std;


// This program uses a structure to hold data about a rectangle 

struct rectangle
{

	float length;
	float width;
	float area;
	float perimeter;
};



int main()
{
    rectangle box;

    cout << "Enter the length of a rectangle: ";
	cin >> box.length;           // read in the length member of box
	cout << "Enter the width of a rectangle: ";
	cin >> box.width;           // read in the width member of box
	cout << endl << endl;

	box.area = box.length * box.width;              // compute the area member of box
	box.perimeter = 2 * box.length + 2 * box.width; // compute the perimeter member of box

	cout << fixed << showpoint << setprecision(2);
	cout << "The area of the rectangle is " << box.area <<endl;
    cout << "The perimeter of the rectangle is " << box.perimeter << endl; 
	if (box.length == box.width)
		cout << "The rectangle is a square" << endl;
	else
		cout <<"The rectangle is not a square" << endl;


	return 0;
}