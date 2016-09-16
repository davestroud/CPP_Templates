// This program demonstrates the use of the indirection operator.
#include <iostream>

int main(int argc, char const *argv[]) {
  int x = 25;       // int variable
  int *ptr = nullptr;   // Pointer variable, can point to an int

  ptr = &x;         // Store the address of x in ptr

  // Use both x and ptr to display the value in x.
  std::cout << "Here is the value of x, printed twice;" << std::endl;
  std::cout << x << std::endl;       // Displays the contents of x
  std::cout << *ptr << std::endl;    // Displays the contents of x

  // Assign 100 to the location pointed to by ptr. This
  // will acctually assign 100 to x.
  *ptr = 100;   // Used to dereference pointer

  // Use x and ptr to display the value in x
  std::cout << "Once again, here is the value of x:" << std::endl;
  std::cout << x << std::endl;
  std::cout << *ptr << std::endl;
  return 0;
}
