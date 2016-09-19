#include <iostream>
using namespace std;

class Square
{
public:
	void setSide(float length);
	float findArea();
	float findPerimeter();
	Square(float length);
	Square();
	~Square();
	
private:
	float side;
};

int main()
{
    Square  box;          // box is declared as an object of Square class
	Square box1(9);
	
    float   size;         // size contains the length of a side of the square  

  cout << "Please input the size of the side of the square" << endl;
  cin >> size;

  box.setSide(size);
 
  cout << "The area of the square is " << box.findArea() << endl;
  cout << " The perimeter of the square is " << box.findPerimeter() << endl;
   cout << "The area of box1 is " << box1.findArea() << endl;
  cout << " The perimeter of box1 is " << box1.findPerimeter() << endl;
   

return 0;
}

//__________________________________________________________________
//Implementation section     Member function implementation

//**************************************************
//                  setSide
//
// task:    This procedure takes length of a side and
//          places it in the appropriate member data
// data in: length of a side
//***************************************************

void Square::setSide(float length)
   // This procedure will take the length of a side and
   // place it in the appropriate member data
{
   side = length;	
}
//**************************************************
//                 findArea
//
// task:    This finds the area of a square
// data in: none (uses value of data member length
// data returned:  area of square
//***************************************************

float Square::findArea()
{
   return side * side;
}
//**************************************************
//                 findPerimeter
//
// task:    This finds the perimeter of a square
// data in: none (uses value of data member length
// data returned:  perimeter of square
//***************************************************	
float Square::findPerimeter()
{
   return 4 * side;
}

Square::Square(float length)
{
	side = length;
}

Square::Square()
{
	side = 1;
}

Square::~Square()
{
}
