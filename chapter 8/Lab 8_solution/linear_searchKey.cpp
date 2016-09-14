// This program performs a linear search on a character array

#include<iostream>
using namespace std;

int searchList( int[], int, int);   // function prototype
const int SIZE=8;

int main()
{
	int nums[SIZE] = {3,6,-19,5,5,0,-2,99};
	int numsearch;  //number to search for
	int found;
	
	cout << "Enter a number to search for:" << endl;
	cin >> numsearch;
	found = searchList(nums, SIZE, numsearch);
	if (found == -1)
		cout << "The number was not found in the list" << endl;
	else
		cout << "The number is in the " << found + 1 << " position of the list" << endl;
	return 0;

}

int searchList( int List[], int numElems, int value)
{
	for (int count = 0;count <= numElems; count++)
	{
		if (List[count] == value)
			return count;
	}
	return -1;
}
