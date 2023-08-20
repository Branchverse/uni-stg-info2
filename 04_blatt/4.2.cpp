#include <iostream>
#include <vector>
#include <numeric>   // for std::accumulate
#include <algorithm> // for std::max_element
#include <iterator>  // for std::distance
using namespace std;

int main()
{
  // 1.
  int n;
  cout << "Number n: ";
  cin >> n;
  if (n < 1 || n > 100)
  {
    cout << "MAYDAY MAYDAY, ALAAAAAAAAAAAAAAAAAAAAAAARM! 0 < n <= 100 !" << endl;
    return 1;
  }

  // 2.
  vector<int> ourVector(n); /* Please do me a favor and don't be like those fossil professors
                               who only use 1 letter variable names,
                               the compiled code is binary and doesn't care for ur variable name length.
                               So just make them readable and name them what they are.
                               Especially people that don't come with a Math background will thank you.
                               */

  // 3.
  for (int i = 0; i < n; i++)
  {
    cout << "Input #" << i << ": ";
    cin >> ourVector[i];
  }
  for (int i = 0; i < ourVector.size(); i++) // Here we use size instead of n because its more accurate
  {
    cout << "Output #" << i << ": " << ourVector[i] << endl;
  }

  // 4.
  int sum = 0;
  for (int i = 0; i < ourVector.size(); i++)
  {
    sum += ourVector[i];
  }
  cout << "Sum: " << sum << endl;

  // Without a for loop
  int sum2 = std::accumulate(ourVector.begin(), ourVector.end(), 0);
  cout << "Sum2: " << sum2 << endl;

  // 5.
  int currentMaxIndex = 0;
  int currentMax = ourVector[currentMaxIndex];
  for (int i = 1; i < ourVector.size(); i++)
  {
    if (ourVector[i] > currentMax)
    {
      currentMax = ourVector[i];
      currentMaxIndex = i;
    }
  }
  cout << "Max: " << currentMax << " at position: " << currentMaxIndex << endl;

  // Without a for loop, but with iterators, may be too complicated, then just ignore ;)
  auto maxValueIterator = max_element(ourVector.begin(), ourVector.end());            // Points at the max value
  int maxValueIndex = distance(ourVector.begin(), maxValueIterator);                  // Gets distance between start and pointer
  cout << "Max2: " << *maxValueIterator << " at position: " << maxValueIndex << endl; // *maxValueIterator dereferences the pointer

  return 0;
}

/* Resulting Dialog

Number n: 3
Input #0: 1
Input #1: 3
Input #2: 2
Output #0: 1
Output #1: 3
Output #2: 2
Sum: 6
Sum2: 6
Max: 3 at position: 1
Max2: 3 at position: 1

*/