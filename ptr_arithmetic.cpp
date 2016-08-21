// This program illustrates how to use pointer arithmetic to
// access elements of an array

#include <iostream>
using namespace std;

int main()
{
  int grades[] = {90, 88, 76, 54, 34};
      // This defines and initializes an int array
      // Since grades in is an array name, it is really a pointer
      // that holdes the starting address of the array

  cout << "The first grade is "
        << *grades << endl;           // The * before grades
                                      // dereferences it so that the
                                      // contents of array location 0
                                      // is printed instead of its address

  cout << "The second grade is "      // The same is done for the other
        << *(grades + 1) << endl;     // elements of the array.  In
  cout << "The third grade is "       // each case, pointer arithmetic
        << *(grades + 2) << endl;     // gives us the address of the next
  cout << "The fourth grade is "      // array element.  Then the
        << *(grades + 3) << endl;     // indirection operator * gives
  cout << "The fifth grade is "       // us the value of what is stored
        << *(grades + 4) << endl;     // at that address

  return 0;
}
