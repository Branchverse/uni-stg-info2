#include <iostream>
#include <fstream>
using namespace std;

// I don't have access to the provided files so I just use own data
int main()
{
  string line;
  double ongoingArea, x, y, prevX, prevY = 0;

  // Please note that I saved the first corner at the end of the file again to make it easier
  ifstream in("readfile.txt");
  if (!in.good()) // Check if file is open (not necessary)
  {
    cout << "File not found!" << endl;
    return 1;
  }

  while (in.good()) // starting with 1 coz we got origin points beforehand
  {
    in >> x >> y; // This always reads the next two numbers
    cout << "Corner: " << x << "," << y << endl;

    ongoingArea += 0.5 * ((prevY + y) * (prevX - x));
    cout << "Area: " << ongoingArea << endl;

    prevX = x;
    prevY = y;
  }

  in.close();
  cout << "Final area: " << ongoingArea << endl;
}

/* Results

Corner: 0,0
Area: 0
Corner: 2,0
Area: 0
Corner: 3,2
Area: -1
Corner: 1.5,3
Area: 2.75
Corner: -1,2
Area: 9
Corner: 0,0
Area: 8
Final area: 8
*/