#include <iostream>
using namespace std;

int main()
{
  int x, y, z;
  cout << "x: ";
  cin >> x;
  cout << "y: ";
  cin >> y;
  cout << "z: ";
  cin >> z;

  if (x == 200 || x == 800)
  {
    x = 0;
  }

  else if (x > 200 && x < 800 && y >= 0)
  {
    if (x <= 0)
    {
      x = x - y;
      z++;
    }
  }

  else
  {
    x = 1;
  }

  cout << "x = " << x << ", y = " << y << ", z = " << z << endl;
  return 0;
}

/* Resulting Dialog
x: 100 y: 10 z: 1
x = 1, y = 10, z = 1

x: 200 y: 20 z: 25
x = 0, y = 20, z = 25

x: 500 y: 0 z: 100
x = 500, y = 0, z = 100

x: 500 y: 300 z: 0
x = 500, y = 300, z = 0

x: 500 y: 250 z: 3
x = 500, y = 250, z = 3

x: 543 y: 21 z: 0
x = 543, y = 21, z = 0

x: 800 y: 8 z: 80
x = 0, y = 8, z = 80

x: 999 y: 999 z: 999
x = 1, y = 999, z = 999
*/