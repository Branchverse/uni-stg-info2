#include <iostream>
using namespace std;

void print_triangle(int n)
{
  for (int i = 0; i < n; i++)
  {
    for (int j = 1; j < n - i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j < i + 1; j++)
    {
      cout << "X ";
    }
    cout << endl;
  }
  cout << endl;
}

void print_floor(int start, int end, int spaceAmount)
{
  for (int i = start; i < end; i++)
  {
    for (int j = i + 1; j < end + spaceAmount; j++)
      cout << " ";
    for (int j = 0; j < i + 1; j++)
      cout << "X ";
    cout << endl;
  }
}

int main()
{
  // 2.
  print_triangle(3);
  print_triangle(5);
  print_triangle(9);

  // 3.
  // Example
  print_floor(0, 4, 6);
  print_floor(2, 6, 4);
  print_floor(4, 8, 2);
  print_floor(6, 10, 0);
  cout << endl;

  // Loop
  int floors = 6;
  int layersPerFloor = 5;
  int layerStartDiff = 2; // Means we start over on the 2nd +1 layer of the previous floor
  for (int floor = 0; floor < floors; floor++)
  {
    int start = floor * layerStartDiff;
    int end = start + layersPerFloor;
    int spaceAmount = layerStartDiff * (floors - (floor + 1));
    print_floor(start, end, spaceAmount);
  }

  return 0;
}

/* Resulting Dialog

  X
 X X
X X X

    X
   X X
  X X X
 X X X X
X X X X X

        X
       X X
      X X X
     X X X X
    X X X X X
   X X X X X X
  X X X X X X X
 X X X X X X X X
X X X X X X X X X

         X
        X X
       X X X
      X X X X
       X X X
      X X X X
     X X X X X
    X X X X X X
     X X X X X
    X X X X X X
   X X X X X X X
  X X X X X X X X
   X X X X X X X
  X X X X X X X X
 X X X X X X X X X
X X X X X X X X X X

              X
             X X
            X X X
           X X X X
          X X X X X
            X X X
           X X X X
          X X X X X
         X X X X X X
        X X X X X X X
          X X X X X
         X X X X X X
        X X X X X X X
       X X X X X X X X
      X X X X X X X X X
        X X X X X X X
       X X X X X X X X
      X X X X X X X X X
     X X X X X X X X X X
    X X X X X X X X X X X
      X X X X X X X X X
     X X X X X X X X X X
    X X X X X X X X X X X
   X X X X X X X X X X X X
  X X X X X X X X X X X X X
    X X X X X X X X X X X
   X X X X X X X X X X X X
  X X X X X X X X X X X X X
 X X X X X X X X X X X X X X
X X X X X X X X X X X X X X X
 */