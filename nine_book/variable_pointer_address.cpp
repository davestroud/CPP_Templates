// This program stores the address of a variable in a Pointer
#include <iostream>

int main(int argc, char const *argv[]) {
  int x = 25;                   // int variable
  int* ptr = nullptr;          // Pointer variable, can point to an int

  ptr = &x;                     // Store the address of x in ptr
  std::cout << "The value of x is " << x << std::endl;
  std::cout << "The address of x is " << ptr << std::endl;
  return 0;
}
