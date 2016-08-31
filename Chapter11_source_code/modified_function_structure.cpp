// This program uses a function to return a structure.  This
// is a modification of circle_struct.cpp
#include <iostream>
#include <iomanip>
#include <math>   // For the pow function
using namespace std;

//Constant for Pi
const double PI = 3.14159;

// Structure declaration
struct Circle
{
  double radius;        // A circles radius
  double diameter;      // A circles diameter
  double area;          // A circles area
};

// Function prototype
Circle getInfo();

int main()
{
  Circle c;       // Define a structure variable

  // Get data about the circle
  c.area = PI * pow(c.radius, 2.0);


  // Display the circle data
  cout << "The radius and area of the circle are:\n";
  cout << fixed << setprecision(2);
  cout << "Radius: " << c.radius << endl;
  cout << "Area " << c.area << endl;
  return 0;
}


//*****************************************************************
// Definition of function getInfo.  This function uses a local    *
// variable, tempCircle, which is a circle structure.  The user   *
// enter the diameter of the circle which is stored in            *
// tempCircle.diameter.  The function then calculates the radius  *
// which is stored in tempCircle.radius. tempCircle is then       *
// return from the function.                                      *
//*****************************************************************
