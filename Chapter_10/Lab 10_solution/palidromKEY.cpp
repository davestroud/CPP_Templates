#include<iostream>
#include<string>
using namespace std;

int main()
{
	char line[51];
	int length, count = 0; 

	cout << "Enter a string of no more than 50 characters" << endl;
	cin.getline(line,51);

	length = strlen(line);

	if(length == 1)
		cout << "You entered a palindrome" << endl;
	else
		while(line[count] == line[length - count - 1])
		{
			count++;
			if(count == length - 1)
			cout << "You entered a palindrome" << endl;
		
		}

		if(count < length - 1)
			cout << "You did not enter a palindrome" << endl;

	return 0;
}
	

