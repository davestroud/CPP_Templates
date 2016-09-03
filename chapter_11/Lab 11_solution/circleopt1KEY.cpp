#include <iostream>
#include <cmath>    // necessary for pow function
#include <iomanip>
using namespace std;


struct circle      // defines the structure circle
{                  // This structure has 6 members
	float centerX; // x coordinate of center
	float centerY; // y coordinate of center
	float radius;
	float area;
	float circumference;
	float distance_from_origin;
};

const float PI = 3.14159;
const int MAXCIRCLE = 6;

int main()
{
	circle cshape[MAXCIRCLE];
	int pos;  // loop counter
	int closestPos;  // position in array of circle
	                //  closest to origin
	float closest = 999999;
                    //  distance from origin of
	                //  circle closest to origin

	for (pos =0; pos < MAXCIRCLE; pos++)
	{
	   cout << "Please enter the radius of circle number " << pos +1 << ": ";
	   cin >> cshape[pos].radius;
	   cout << "Please enter the x-coordinate of the center: ";
 	   cin >> cshape[pos].centerX;
	   cout << "Please enter the y-coordinate of the center: ";
	   cin >> cshape[pos].centerY;

	   cshape[pos].area = PI * pow(cshape[pos].radius, 2.0);
	   cshape[pos].circumference = 2 * PI * cshape[pos].radius;
	   cshape[pos].distance_from_origin = sqrt(pow(cshape[pos].centerX,2.0)
		   + pow(cshape[pos].centerY,2.0));
	     
	   cout << endl << endl;
	   if (cshape[pos].distance_from_origin < closest)
	   {
		   closest = cshape[pos].distance_from_origin;
           closestPos = pos;
	   }
	}	
	cout << setprecision(2) << fixed << showpoint;

	cout << "The closest circle to the origin is circle number "
		 << closestPos + 1 << endl;
	cout << "The distance from the origin is " << closest << endl;

	for (pos =0; pos < MAXCIRCLE; pos++)
	{
		cout << "The area of circle number " << pos + 1 << " is  ";
		cout << cshape[pos].area << endl;
		cout << "The circumference of circle number " << pos + 1
			 << " is " ;
		cout << cshape[pos].circumference << endl << endl;

	}



	return 0;
}
