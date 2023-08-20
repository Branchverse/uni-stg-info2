#include <iostream>
using namespace std;

int main()
{
  // Variables
  int coolNumber;

  // Input
  cout << "Give me a cool number: ";
  cin >> coolNumber;

  // Loop
  while (coolNumber != 1)
  {
    if (coolNumber % 2 == 0) // Module means what is the rest if I divide the number by 2
    {
      coolNumber /= 2; // operators like +=, -=, *=, /=, %= are calculation with immediate assignment
    }
    else
    {
      coolNumber = 3 * coolNumber + 1;
    }
    cout << coolNumber << " ";
  }

  cout << endl
       << "That's a cool number!" << endl;
}

/* Resulting Dialog

Give me a cool number: 3
10 5 16 8 4 2 1
That's a cool number!

Give me a cool number: 19
58 29 88 44 22 11 34 17 52 26 13 40 20 10 5 16 8 4 2 1
That's a cool number!
*/