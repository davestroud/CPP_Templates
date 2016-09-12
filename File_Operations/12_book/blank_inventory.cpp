// This program sets up a file of blank inventory records.
#include <iostream>
#include <fstream>
using namespace std;

// Constants
const int DESC_SIZE = 31;
const int NUM_RECORDS = 5;

// Declaration of InventoryItem structure
struct InventoryItem
{
  char desc[DESC_SIZE];
  int qty;
  double price;
};

int main(int argc, char const *argv[]) {
  // Create an empty InventoryItem structure
  InventoryItem record = { "", 0, 0.0};

  // Opend the file for binary output
  fstream inventory("Inventory.dat", ios::out | ios::binary);

  // Write the blank records.
  for (int count = 0; count < NUM_RECORDS; count++)
  {
    cout << "Now writing record " << count << endl;
    inventory.write(reinterpret_cast<char *>(&record),
                    sizeof(record));
  }

  // Close the file
  inventory.close();
  return 0;
}
