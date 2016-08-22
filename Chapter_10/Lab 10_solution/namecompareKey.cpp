#include<iostream>
#include<cstring>
using namespace std;




int main()
{

	char string1[25];
	char string2[25];
	
	cout << "Please input the first name" << endl;
	cin.getline(string1,25);
	cout << endl << "Please input the second name" << endl;
	cin.getline(string2,25);

	cout << endl << "The names are as follows:"  << endl;

	if (strcmp(string1,string2) == 0)
	{
		
	    cout << string1 << endl << string2 << endl;
		cout << "The names are the same" << endl;
	}
	
	else if (strcmp(string1, string2) < 0 )
		cout << string1 << endl << string2 << endl;

	else
		cout << string2 << endl << string1 << endl;

	return 0;
}