#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  // Variables
  int coolNumber, i = 0;
  ofstream file("collatz.txt"); // This also overrides previous content

  // Input
  cout << "Give me a cool number: ";
  cin >> coolNumber;

  // Loop
  while (coolNumber != 1)
  {
    i++;                     // Counting
    if (coolNumber % 2 == 0) // Module means what is the rest if I divide the number by 2
      coolNumber /= 2;       // operators like +=, -=, *=, /=, %= are calculation with immediate assignment
    else
      coolNumber = 3 * coolNumber + 1;

    // Write to file
    file << i << " " << coolNumber << endl;
  }

  file.close();

  cout << "That's a cool number!" << endl;
  return 0;
}

/* Resulting Dialog

// CONSOLE
Give me a cool number: 3
That's a cool number!

// collatz.txt
1 10
2 5
3 16
4 8
5 4
6 2
7 1
*/
