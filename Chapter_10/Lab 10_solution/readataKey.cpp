#include<iostream>

using namespace std;



int main()

{


	char last[10];


	cout << "Please input a name no longer than 9 characters" << endl;
	cin.getline(last,10);
    cout <<"The name entered is " << last << endl;

	return 0;
}

