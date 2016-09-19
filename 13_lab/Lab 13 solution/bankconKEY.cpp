#include<iostream>
using namespace std;

class SavingsAccount
{

public:
	    SavingsAccount(int dol, int cent);
		SavingsAccount();
		void Deposit(int dol, int cent);
		void Withdrawal(int dol, int cent);
		void ShowBalance() const;

private:

		int dollars;
		int cents;
};


int main()

{

 int dol, cent;
 char more;

 SavingsAccount bank1(400,50),bank2;


 cout << "Would you like to make a deposit in bank1?   Y or y for yes" << endl;
 cin >> more;

 while (more == 'y' || more == 'Y')
 {
	cout << "Please input the dollars to be deposited" << endl;
	cin >> dol;
    cout << "Please input the cents to be deposited" << endl;
	cin >> cent;
	bank1.Deposit(dol,cent);
	cout << "Would you like to make a deposit in bank1?   Y or y for yes" << endl;
    cin >> more;

}

 cout << "Would you like to make a withdrawal in bank1?   Y or y for yes" << endl;
 cin >> more;

 while (more == 'y' || more == 'Y')
 {
	cout<< "Please input the dollars to be withdrawn" << endl;
	cin >> dol;
    cout << "Please input the cents to be withdrawn" << endl;
	cin >> cent;
	bank1.Withdrawal(dol,cent);
	cout << "Would you like to make a withdrawal in bank1?   Y or y for yes" << endl;
    cin >> more;
 }
	
	bank1.ShowBalance();




 cout << "Would you like to make a deposit in bank2?   Y or y for yes" << endl;
 cin >> more;
 while (more == 'y' || more == 'Y')
 {
	cout << "Please input the dollars to be deposited" << endl;
	cin >> dol;
    cout << "Please input the cents to be deposited" << endl;
	cin >> cent;
	bank2.Deposit(dol,cent);
	cout << "Would you like to make a deposit in bank2?   Y or y for yes" << endl;
    cin >> more;

 }

 cout << "Would you like to make a withdrawal in bank2?   Y or y for yes" << endl;
 cin >> more;

 while (more == 'y' || more == 'Y')
 {
	cout << "Please input the dollars to be withdrawn" << endl;
	cin >> dol;
    cout << "Please input the cents to be withdrawn" << endl;
	cin >> cent;
	bank2.Withdrawal(dol,cent);
	cout << "Would you like to make a withdrawal in bank2?   Y or y for yes" << endl;
    cin >> more;
}
	
	bank2.ShowBalance();



return 0;
}


SavingsAccount::SavingsAccount(int dol, int cent)

{
	dollars = dol + cent / 100;
	cents = cent % 100;

}

SavingsAccount::SavingsAccount()
{
	dollars = 0;
	cents = 0;
}


void SavingsAccount::Deposit(int dol, int cent)
{

	dollars = dollars + dol + cent / 100;
	cents = cents + cent % 100;

}

void SavingsAccount::Withdrawal(int dol, int cent)
{
	dollars = dollars - dol;
	if (cents < cent)
	{
		dollars = dollars - 1;
	    cents = abs(100 + cents - cent);

	}

	else
		cents = cents - cent;
	
	//normalize
	dollars = dollars + cents / 100;
	cents = cents % 100;

}		


void SavingsAccount::ShowBalance() const

{

	cout << "Dollars = " << dollars << "  Cents= " << cents << endl;

}