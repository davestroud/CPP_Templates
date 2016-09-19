	
// This program reads floating point data from a data file and places those
// values into the private data member called values (a floating point array)
// of the Floatlist class. Those values are then printed to the screen.
// The input is done by a member function called GetList, the output 
// is done by a member function called PrintList.  The amount of data read in
// is stored is the private data member called length.  The member function
// GetList is called first so that length can be initialized to zero.
  
#include <iostream>
#include <fstream>
#include <iomanip>
using namespace std;

const int MAX_LENGTH = 50; // MAX_LENGTH contains the maximum length of our list
class FloatList            // Defines a class that contains an array of floating 
                           // point numbers
{
public:
	void getList(ifstream&);   // Member function that gets data from a file
	void printList() const;    // Member function that prints data from that
	                           // file to the screen.

	float findAverage() const;
	FloatList();               // constructor that sets length to 0.  
	~FloatList();			   // destructor                           
    
private:
	int length;                // Holds the number of elements in the array
	float values[MAX_LENGTH];  // The array of values

};

int main()
{
   ifstream tempData;   // Declares a data file

   FloatList list;

   cout << fixed << showpoint;
   cout << setprecision(2);

   tempData.open("temperatures.txt");

   
   list.getList(tempData);
   list.printList();

  cout << "The average temperature is " << list.findAverage() << endl;

return 0;
}



 FloatList::FloatList()
{
	length = 0;
}

 void FloatList::getList(ifstream& data)
 {
	 float item;
	 data >> item;
	 while(data)
	 {
		 values[length] = item;
		 length++;
		 data >> item;
	 }

 }

 void FloatList::printList() const
 {
	 int index;
	 for (index =0;  index < length; index++)
		 cout << values[index] << endl;
 }

 float FloatList::findAverage() const
 {
	 float sum = 0;
	 for (int count = 0;  count < length;   count++)

		 sum = sum + values[count];

	 return sum / length;
 }

 FloatList::~FloatList()
 {
 }
