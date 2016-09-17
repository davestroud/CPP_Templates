// This program shows an array name being dereferenced with the *
// operator.
#include <iostream>

int main(int argc, char const *argv[]) {
  short numbers [] = {10, 20, 30, 40, 50};

  std::cout << "The first element of the array is "
            << *numbers << std::endl;
  return 0;
}
