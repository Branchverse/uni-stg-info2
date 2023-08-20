#include <iostream>
#include <vector>
using namespace std;

int main()
{
  // 2.
  vector<int> divisors{2, 3, 5, 7};

  // 3.
  for (int i = 0; i < divisors.size(); i++)
  {
    cout << divisors[i] << " ";
  }
  cout << endl
       << endl;

  // 4.
  int n = 100;
  vector<int> primes = divisors;
  for (int i = 8; i < n; i++)
  {
    bool isPrime = true;         // Assume it is prime, if divisible set to false
    for (int divisor : divisors) // This is a shorthand to iterate over the values of a vector
    {
      if (i % divisor == 0)
      {
        isPrime = false;
        break; // This stops the inner for loop
      }
    }
    if (isPrime)           // This is a shorthand to check if a boolean is true
      primes.push_back(i); // If we only have one line we can leave the {} away
  }

  // Output
  for (int prime : primes)
    cout << prime << " "; // If we only have one line we can leave the {} away

  cout << endl;
  cout << "Total number or primes found: " << primes.size() << endl;

  return 0;
}

/* Resulting Dialog

2 3 5 7

2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
Total number or primes found: 25
*/