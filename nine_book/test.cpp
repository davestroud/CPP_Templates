#include <iostream>

int main(int argc, char const *argv[]) {
  const int SIZE = 5;
  int numbers[SIZE];

  for (int index = 0; index < SIZE; index++)
      numbers[index] = 99;

  std::cout << "Here are the array elements" << std::endl;
  for (int index = 0; index < SIZE; index++)
      std::cout << numbers[index] << std::endl;
  return 0;
}
