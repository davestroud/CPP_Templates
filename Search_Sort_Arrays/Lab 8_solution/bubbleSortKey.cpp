// This program uses a bubble sort to arrange an array of integers in descending order

#include<iostream>
using namespace std;

const NUM=8;

void bubbleSortArray(int [], int);    // function prototypes
void displayArray(int[], int);


int main()
{
	
	int values[NUM] = {23,0,45,-3,-78,1,-1,9};
    
	cout << "The values before the bubble sort is performed are:" << endl;
	
	
	displayArray(values,NUM);
	bubbleSortArray(values,NUM);
	cout<<"The values after the bubble sort is performed are:"<<endl;
	displayArray(values,NUM);
	return 0;
}

void displayArray(int array[], int elems)    // function headings
{
	for (int count = 0; count < elems; count++)
		cout << array[count]<<"  ";
	cout << endl;
}
void bubbleSortArray(int array[], int elems)
{
	int  temp;
	bool swap;
	int bottom = elems-1;
	do
	{
		swap = false;
		for (int count = 0; count < bottom; count++)
		{
			if (array[count] < array[count+1])
			{
				temp = array[count];
				array[count] = array[count+1];
				array[count+1] = temp;
				swap = true;
			}
		
		
		}	
		cout << "The bubble sort array in progress" << endl;
		displayArray(array,NUM);
        
		bottom--;
	}while (swap != false);
}
