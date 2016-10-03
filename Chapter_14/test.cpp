#include <iostream>
using namespace std;

void showValues(int [], int);     // Function prototype

int main(int argc, char const *argv[]) {
  const int ARRAY_SIZE = 8;
  int numbers[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

  showValues(numbers, ARRAY_SIZE);
  return 0;
}

void showValues(int nums[], int size)
{
  for (int index = 0; index < size; index++)
      cout << nums[index] << " " << endl;
      cout << endl;
}
