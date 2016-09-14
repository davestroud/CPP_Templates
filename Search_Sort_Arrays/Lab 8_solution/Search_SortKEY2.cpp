
// This program uses a selection sort to arrange an array of integers in 
// ascending order and then searches for a given element using a binary 
// search



#include<iostream>
#include<fstream>
using namespace std;

// function prototypes

void selectionSortArray(int [], int);  
int binarySearch(int array[],int numElems,int value); 
void displayArray(int array[], int elems, ofstream& outFile) ;
float findMean(int[], int);
const int SIZE = 50;

int main()
{
	int arrayValues[SIZE];
	int found;      // location in array of searched item
	int value;      // item to be searched

	int total;     // the number of array loctions actually used
	ifstream inData;
	ofstream outData;

	inData.open("intFile.dat");
	outData.open("intOut.dat");
	inData >> total;
	inData >> value;

	for (int count =0;  count < total;  count++)
	{
	inData >> arrayValues[count];
	}

	
	




	outData << "This array has " << total << " items." << endl;
	outData << "The array entered by the user is as follows: " << endl;

	displayArray(arrayValues, total, outData);
	selectionSortArray(arrayValues,total);   // sort the values
	outData <<"The sorted array is as follows: "<< endl;
	displayArray(arrayValues, total, outData);
	outData << "The item searched is " << value << endl;
	found = binarySearch(arrayValues, total, value); //function call to perform the binary search
	                                          //on array looking for an occurrence of value
	if (found == -1)
		cout << "The value " << value << " is not in the list" << endl;
	else
	{
		outData << "The value " << value << " is in position number "
		     << found + 1 << " of the list" << endl << endl; 
	}
	
	outData << "The mean of all the elements in the array is " <<  findMean(arrayValues, total) << endl;
	return 0;
}

//******************************************************************
//                      displayArray
//
// task:	  	  to print the array
// data in:       the array to be printed, the array size
// data out:      none
//
//******************************************************************

void displayArray(int array[], int elems, ofstream& outFile)    // function heading
{							   // Displays array
	for (int count = 0; count < elems; count++)
		outFile << array[count] << "  ";
      outFile << endl;
}





//*******************************************************************
//                     binarySearch
//
// task:		  This searches an array for a particular value
// data in:       List of values in an orderd array, the number of 
//                elements in the array, and the value searched for
//                in the array
// data returned: Position in the array of the value or -1 if value
//                not found
//
//*******************************************************************
int binarySearch(int array[],int numElems,int value) //function heading
{
	int first = 0;				    // First element of list
	int last = numElems - 1;	    // last element of the list
	int middle;					    // variable containing the current 
	                                // middle value of the list
	
	while (first <= last)
	{
		middle = first + (last - first) / 2; 
		   
	if (array[middle] == value)
		return middle;		       // if value is in the middle, we are done
	                                 
	else if (array[middle]>value)
		last = middle - 1;		   // toss out the second remaining half of
								   // the array and search the first 
	else
		first = middle + 1;		   // toss out the first remaining half of
								   // the array and search the second
	}
	
	return -1;					   // indicates that value is not in the array
}

//******************************************************************
//                      selectionSortArray
//
// task:		  to sort values of an array in ascending order
// data in:       the array, the array size
// data out:      the sorted array
//
//******************************************************************


void selectionSortArray(int array[], int elems)
{
	int seek;      //array position currently being put in order
	int minCount;  //location of smallest value found
	int minValue;  //holds the smallest value found
	
	for (seek = 0; seek < (elems-1);seek++)  // outer loop performs the swap
		                                   // and then increments seek
	{
		minCount = seek;
		minValue = array[seek];
		for(int index = seek + 1; index < elems; index++) 
            {
	      	  // inner loop searches through array     
			  // starting at array[seek] searching
			  // for the smallest value. When the 
			  // value is found, the subscript is
			  // stored in minCount. The value is    
			  // stored in minValue.
		
			if(array[index] < minValue)
			{
				minValue = array[index];                                                     
				minCount = index;       
		      }
            }

			// the following two statements exchange the value of the
			// element currently needing the smallest value found in the 
		    // pass(indicated by seek) with the smallest value found
		    // (located in minValue)

		array[minCount] = array[seek];  
		array[seek] = minValue;

	}
}
	

//********************************************************************
//                          findMean
//
// task:		   To find the average of integers in an array
// data in:        An integer array and the array size
// data returned:  The mean of the integers in the array
//
//********************************************************************

float findMean(int array[], int size)

{
	float total = 0;
	for (int count=0; count < size; count++)
		total = total + array[count];
	
	return total/size;
}