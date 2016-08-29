#include<iostream>
#include<iomanip>

using namespace std;


// This program uses a structure to hold data about a rectangle 
// It calculates the area and perimeter of a box 


struct dimensions
{
	float length;
	float width;

};

struct results
{

	float area;
	float perimeter;
};

struct rectangle
{

	results attributes;
	dimensions sizes;
		
};

 
float calculateArea(rectangle);
float calculatePerimeter(rectangle);

int main()
{
	rectangle box;
	
    cout << "Enter the length of a rectangle: ";
    cin >>	box.sizes.length;
	cout << "Enter the width of a rectangle: ";
	cin >> box.sizes.width;
	cout << endl << endl;

    box.attributes.area = calculateArea(box); 
    box.attributes.perimeter = calculatePerimeter(box); 

	cout << fixed << showpoint << setprecision(2);
	cout << "The area of the rectangle is " << box.attributes.area << endl; 
	cout << "The perimeter of the recangle is " <<  box.attributes.perimeter << endl;

	return 0;
}

//**********************************************************
//                        calculateArea
//
// task           This function calculates the area 
//                of a box (length * width)
// data in:       a structure containg length & width
// data returned  the area of the box
//
//**********************************************************

float calculateArea(rectangle box)
{

  return box.sizes.width * box.sizes.length;

}


//**********************************************************
//                        calculatePerimeter
//
// task           This function calculates the perimeter 
//                of a box ( 2 *length + 2 * width)
// data in:       a structure containg length & width
// data returned  the perimeter of the box
//
//**********************************************************
float calculatePerimeter(rectangle box)

{
   return 2 * box.sizes.length + 2 * box.sizes.width;
  
}