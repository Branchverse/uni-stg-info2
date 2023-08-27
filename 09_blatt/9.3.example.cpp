#include <iostream>
using namespace std;

int main()
{
  int arr[3] = {1, 2, 3};
  double arr3[3] = {1.5, 2.5, 3.5};

  cout << "int: " << endl
       << arr << endl
       << arr + 1 << endl;

  cout << "double: " << endl
       << arr3 << endl
       << arr3 + 1 << endl;
}

/* Result
int:
0x7fffffffd8f4 // As you can see, the int is 4 Bytes, so the int pointer is increased by 4
0x7fffffffd8f8
double:
0x7fffffffd900 // And the double is 8 bytes, so the double pointer is increased by 8
0x7fffffffd908
 */