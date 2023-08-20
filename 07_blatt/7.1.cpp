#include <iostream>
using namespace std;

int counter = 1;
void towerOfHanoi(int n, char start, char end, char help)
{ // Order 1.-7. for n=3,
  // Uncomment the couts to see the order of the moves
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

A=>C  - Tip of subtower 2 has to move away
A=>B  - Bottom of subtower n=2 has to move
C=>B  - Tip of subtower 2 comes to complete
A=>C  - Bottom of maintower n=3 has to move
B=>A  - Tip of subtower 2 has to move away again
B=>C  - Bottom of subtower n=2 can stack on top of maintower base
A=>C  - Tip of subtower 2 comes to complete again

A=>B  - 1 on empty
A=>C  - 2 on empty
B=>C  - 1 on 2
A=>B  - 3 on empty
C=>A  - 1 on 4
C=>B  - 2 on 3
A=>B  - 1 on 2
A=>C  - 4 on empty
B=>C  - 1 on 4
B=>A  - 2 on empty
C=>A  - 1 on 2
B=>C  - 3 on 4
A=>B  - 1 on empty
A=>C  - 2 on 3
B=>C  - 1 on 2
*/