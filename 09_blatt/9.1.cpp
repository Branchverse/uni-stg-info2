#include <iostream>
using namespace std;

void swapWithPointers(int *a, int *b) // Pointers
{
  cout << "a = " << a << ", b = " << b << endl; // Pointer addresses
  int tmp = *a;                                 // Get the VALUE behind pointer a
  *a = *b;                                      // Swap the VALUES
  *b = tmp;                                     // Swap the VALUES
  cout << "Swapped!" << endl;
  cout << "a = " << a << ", b = " << b << endl; // Pointer addresses
}

int main()
{
  int a = 1, b = 2;
  cout << "a = " << a << ", b = " << b << endl;
  swapWithPointers(&a, &b); // This changes since we now need to pass the address directly
  cout << "a = " << a << ", b = " << b << endl;
}

/* Results

a = 1, b = 2
a = 0x7fffffffd920, b = 0x7fffffffd924 => Pointer addresses
Swapped!
a = 0x7fffffffd920, b = 0x7fffffffd924 => They remain the same, since we swapped the values, not the addresses
a = 2, b = 1
*/