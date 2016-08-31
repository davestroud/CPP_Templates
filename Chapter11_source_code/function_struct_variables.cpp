// This program has functions that accept structure variables
// as arguments
#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

struct InventoryItem
{
  int partNum;            // Part number
  string description      // Item description
  int onHand;             // Units on hand
  double price;           // Unit price
};

// Function Prototypes
void getItem(InventoryItem&);     // Argument passed by reference
void showItem(InventoryItem);     // Argument passed by value

int main()
{
  InventoryItem part;

  getItem(part);
  showItem(part);
  return 0;
}

//************************************************************
// Definition of function getItem.  This function uses       *
// a structure reference variable as its parameter. It asks  *
// the user for information to store in its structure        *
//************************************************************




//***********************************************************
//Definition of function showItem.  This function accepts   *
//an argument of the InventoryItem structure type.  The     *
// contents of the structure is displayed.                  *
//************************************************************
