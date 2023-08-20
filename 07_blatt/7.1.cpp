#include <iostream>
using namespace std;

int counter = 1;
void towerOfHanoi(int n, char start, char end, char help)
{ // Comment for n=3
  if (n == 1)
  {
    // cout << "Move top piece to end" << endl;
    cout << start << "=>" << end << endl; // 1. 3. 5. 7.
    return;
  }

  // cout << "Move Tower size " << n - 1 << " to helper" << endl;
  towerOfHanoi(n - 1, start, help, end);
  // cout << "Move last piece to end" << endl;
  cout << start << "=>" << end << endl; // 2. 4. 6.
  // cout << "Move Tower size " << n - 1 << " from helper to End" << endl;
  towerOfHanoi(n - 1, help, end, start);
}

int main()
{
  towerOfHanoi(2, 'A', 'C', 'B');
  counter = 1;
  cout << endl;
  towerOfHanoi(3, 'A', 'C', 'B');
  counter = 1;
  cout << endl;
  towerOfHanoi(4, 'A', 'C', 'B');
}

// Feel free to test this site
/* Resulting Dialog

A=>B
A=>C
B=>C

A=>C
A=>B
C=>B
A=>C
B=>A
B=>C
A=>C

A=>B
A=>C
B=>C
A=>B
C=>A
C=>B
A=>B
A=>C
B=>C
B=>A
C=>A
B=>C
A=>B
A=>C
B=>C
*/