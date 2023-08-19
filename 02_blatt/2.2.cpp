#include <iostream>
using namespace std;

int main()
{
  int n;
  cout << "Enter a number: ";
  cin >> n;

  // Row
  for (int i = 0; i < n; i++)
  {
    cout << "X ";
  }
  cout << endl
       << endl;

  // Square
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << "X ";
    }
    cout << endl;
  }
  cout << endl;

  // Triangle
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j <= i; j++)
    {
      cout << "X ";
    }
    cout << endl;
  }
  cout << endl;

  // Pyramid
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - i; j++)
    {
      cout << " ";
    }
    for (int j = 0; j <= i; j++)
    {
      cout << "X ";
    }
    cout << endl;
  }
  cout << endl;
  // Circle
  for (int i = -n + 1; i < n; i++) // Rows
  {
    for (int j = -n + 1; j < n; j++) // Cols
    // Starts with (i,j) = (-4,-4) and ends with (4,4)
    {
      int distance = i * i + j * j; // Alternatively using #include <cmath> powe(i,2) + pow(j,2)
      if (distance < n * n)
        cout << "X ";
      else
        cout << "  "; // 2 Spaces coz 1 space kinda too small and looks ugly like in the paper
    }
    cout << endl;
  }

  cout << endl;
  return 1;
}