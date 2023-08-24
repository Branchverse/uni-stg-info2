#include <iostream>
using namespace std;

int main()
{
  int n = 6;
  double arr[] = {1.5, 2, 3, 4, 5, 6}; // Size 6

  // arr[i] == *(arr + i) because arr is a pointer at the start of the arr and of type double,
  // means if we increase the pointer by 1 we point at the next double value
  double *pointer = arr;
  for (int i = 1; i < n; i++)
    if (*(arr + i) > *pointer)
      pointer = arr + i;

  int index = pointer - arr; // Because pointer is index amount higher than the start of the array
  cout << "Max value: " << *pointer << " at pointer: " << index << endl;
  return 0;
}

/* Result
Max value: 6 at pointer: 5
*/
