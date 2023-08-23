#include <iostream>
using namespace std;

void swap(int &a, int &b) // References
{
  cout << "a = " << a << ", b = " << b;
  int tmp = a;
  a = b;
  b = tmp;
  cout << " Swapping!!" << endl;
  cout << "a = " << a << ", b = " << b << endl;
}

void swap2(int a, int b) // No references
{
  cout << "a = " << a << ", b = " << b;
  int tmp = a;
  a = b;
  b = tmp;
  cout << " Swapping!!" << endl;
  cout << "a = " << a << ", b = " << b << endl;
}

void swap3(int &a, int &b, int &c)
{
  if (a > b)
    swap(a, b);
  if (b > c)
  {
    swap(b, c);
    if (a > b)
      swap(a, b);
  }
}

int main()
{
  // 1.
  int a, b;
  cout << "Give 2 ENTER separated numbers: " << endl;
  cin >> a >> b;
  cout << endl;

  swap(a, b);
  cout << endl
       << "Main after Swap1: " << endl;
  cout << "a = " << a << ", b = " << b << endl;
  cout << endl;

  swap2(a, b);
  cout << endl
       << "Main after Swap2: " << endl;
  cout << "a = " << a << ", b = " << b << endl;
  cout << endl;

  // 2.
  cout << "Swap 3" << endl;
  int x1 = 3, x2 = 2, x3 = 1;
  cout << "x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << endl;
  swap3(x1, x2, x3);
  cout << "x1 = " << x1 << ", x2 = " << x2 << ", x3 = " << x3 << endl;
}

/* Resulting Dialog

Give 2 ENTER separated numbers:
1
2

a = 1, b = 2 Swapping!!
a = 2, b = 1

Main after Swap1:
a = 2, b = 1

a = 2, b = 1 Swapping!!
a = 1, b = 2

Main after Swap2:
a = 2, b = 1 => This is not swapped because we did a copy by value not copy by reference
                Means, the numbers in the swap2 function are unrelated to those in the main function.

References are like mirrors.
If u hold up 5 fingers the mirror shows 5 fingers.
If u swap to 3 fingers, the mirror also shows 3 fingers.

Copy by value means You take a photo of your hand.
If u swap the fingers, the photo won't change ;)

Swap 3
x1 = 3, x2 = 2, x3 = 1
a = 3, b = 2 Swapping!!
a = 2, b = 3
a = 3, b = 1 Swapping!!
a = 1, b = 3
a = 2, b = 1 Swapping!!
a = 1, b = 2
x1 = 1, x2 = 2, x3 = 3

*/