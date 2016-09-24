// This program demonstrates a class with overloaded constructors.
#include <iostream>
#include <iomanip>
#include "Inventory_Item.h"

int main()
{
  // Create an InventoryItem object and call
  // the default constructor.
  InventoryItem item1;
  item1.setDescription("Hammer");   // Set the description
  item1.setCost(6.95);              // Set the cost
  item1.setUnits(12);               // Set the units

  // Create and InventoryItem object and call
  // constructor #2
  InventoryItem item2("Pliers");


  // Display the data for item 1
  cout << "Description: " << item1.getDescription() << endl;
  cout << "Cost: " << item1.getCost() << endl;
  cout << "Units on Hand: " << item1.getUnits() << endl << endl;

  // Display the data for item 2
  cout << "Description: " << item2.getDescription() << endl;
  cout << "Cost: " << item2.getCost() << endl;
  cout << "Units on Hand: " <<item2.getUnits() << endl;

  return 0;
}
