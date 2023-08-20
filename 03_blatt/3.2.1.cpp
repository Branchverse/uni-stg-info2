#include <iostream>
using namespace std;

int main()
{
  // Triangle
  // Variables
  int x1, y1, x2, y2, x3, y3;

  // Input
  cout << "Give me the coordinates of the triangle, x1 y1 x2 separated with <ENTER> : " << endl;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

  // Calculation
  double area = 0.5 * ((y3 + y1) * (x3 - x1) + (y1 + y2) * (x1 - x2) + (y2 + y3) * (x2 - x3));
  cout << "The area of the triangle is: " << area << endl;
}

/* Resulting Dialog

Give me the coordinates of the triangle, x1 y1 x2 separated with <ENTER> :
0
0
0
2
2
0
The area of the triangle is: -2 => negative because we went clockwise
*/