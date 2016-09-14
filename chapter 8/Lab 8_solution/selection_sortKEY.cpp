#include<iostream>
using namespace std;

const NUM=8;
void selectionSortArray(int [], int);    // function prototypes
void displayArray(int[], int);

int main()
{
	int values[NUM] = {23,0,45,-3,-78,1,-1,9};
	cout<<"The values before the selection sort is performed are:"<<endl;
	displayArray(values,NUM);
	selectionSortArray(values,NUM);
	cout<<"The values after the selection sort is performed are:"<<endl;
	displayArray(values,NUM);
	return 0;
}

void displayArray(int array[], int elems)    // function heading
{
	for (int count=0; count<elems; count++)
		cout<<array[count]<<"  ";
	cout<<endl;
}
void selectionSortArray(int array[], int elems)
{
	int seek, minCount, minValue;
	for (seek = 0; seek < (elems-1); seek++)
	{
		minCount = seek;
		minValue = array[seek];
		for(int index = seek + 1; index < elems; index++)
		{
			if(array[index] > minValue)
			{
				minValue = array[index];
				minCount = index;
			}
		}
		array[minCount] = array[seek];
		array[seek] = minValue;
        cout << "Selection Sort in Progress" << endl;
		displayArray(array,NUM);
	}
}
	