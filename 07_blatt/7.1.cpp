#include <iostream>
using namespace std;

void towerOfHanoi(int n, char start, char end, char middle)
{
  if (n == 1)
  {
    cout << start << "=>" << end << endl;
    return;
  }
  towerOfHanoi(n - 1, start, middle, end);
  cout << start << "=>" << end << endl;
  towerOfHanoi(n - 1, middle, end, start);
}

int main()
{
  towerOfHanoi(2, 'A', 'C', 'B');
  cout << endl;
  towerOfHanoi(3, 'A', 'C', 'B');
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