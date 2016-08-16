/* John David Stroud CS2250 Assignment 4
This program asks for the number of units 
purchased and computes the total cost of the 
purchase.  Price is $99.00 per unit with a 
graduated discount */

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  int quantity;  

  const int UNIT_PRICE = 99;
  // Used constants in both instances
  // so changes could be made easily
  const double TWENTY = .8,
    THIRTY = .7,
    FORTY = .6,
    FIFTY = .5;

  cout << "How many units will you be purchasing?" << endl;
  cin >> quantity;

  // Determines quantity to be computed
  if (quantity < 10)
    cout << " The total cost is $" << (UNIT_PRICE * quantity) << endl;
  else if (quantity <= 10 && quantity <= 19)
    cout << " The total cost is $" <<  (UNIT_PRICE * quantity) * TWENTY << endl;
  else if (quantity >= 20 && quantity <= 49)
    cout << " The total cost is $" << (UNIT_PRICE * quantity) * THIRTY << endl;
  else if (quantity >= 50 && quantity <= 99)
    cout << " The total cost is $" << (UNIT_PRICE * quantity) * FORTY << endl;
  else if (quantity >= 100)
    cout << " The total cost is $" << (UNIT_PRICE * quantity) * FIFTY << endl;
 
  return 0;
}

