#include <iostream>
using namespace std;

int main()
{
  // Calculation of polygon area with n sides

  // Variables with proper names so everyone understands what they are
  int n;
  double x, y, prevX, prevY, originX, originY, ongoingArea, currentArea = 0;

  // Input
  cout << "Give me the number of sides of the polygon: ";
  cin >> n;
  cout << "Give me the coordinates of the polygon origin x1, y1 separated with <ENTER> : " << endl;
  cin >> originX >> originY;
  prevX = originX;
  prevY = originY;

  // Calculation
  for (int i = 2; i <= n; i++) // starting with 1 coz we got origin points beforehand
  {
    cout << "next x and y for point #" << i << endl;
    cin >> x >> y;

    ongoingArea += (prevY + y) * (prevX - x);
    currentArea = ongoingArea + ((y + originY) * (x - originX));
    currentArea *= 0.5;
    cout << "Current Area: " << currentArea << endl;

    prevX = x;
    prevY = y;
  }
}

// If you want to check and see ur polygon check out this site https://rechneronline.de/pi/simple-polygon.php

/* Resulting Dialog

Give me the number of sides of the polygon: 4
Give me the coordinates of the polygon origin x1, y1 separated with <ENTER> :
0
0
next x and y for point #2
2
0
Current Area: 6.95335e-310 => This is a phenomenon in binary math, since the computer is limited to the binary system,
                              we can't represent every number, so as we come to the limits of the datatypes,
                              we are only precise to a certain amount
                              Read here for more https://www.ibm.com/docs/en/idr/11.4.0?topic=types-numbers
next x and y for point #3
2
2
Current Area: 2
next x and y for point #4
0
2
Current Area: 4

Give me the number of sides of the polygon: 5
Give me the coordinates of the polygon origin x1, y1 separated with <ENTER> :
0
0
next x and y for point #2
2
0
Current Area: 3.47667e-310
next x and y for point #3
3
2
Current Area: 2
next x and y for point #4
1
3
Current Area: 5.5
next x and y for point #5
-1
2
Current Area: 8
*/