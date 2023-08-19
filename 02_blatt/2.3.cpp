#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
  int x, y, z;
  cout << "x ";
  cin >> x;
  cout << "y ";
  cin >> y;
  cout << "z ";
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
  cout << "x = " << x << " , y = " << y << " , z = " << z << endl;
  return 0;
}