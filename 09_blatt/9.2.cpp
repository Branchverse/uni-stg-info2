#include <iostream>
#include <array>
using namespace std;

int main()
{
  // 1.
  double n;
  array<double, 100> arr;

  // 2.
  cout << "Amount of numbers: ";
  cin >> n;
  if (n < 1 || n > 100)
    return 1;

  // 3.
  for (int i = 0; i < n; i++)
  {
    cout << "#" << i << ": ";
    cin >> arr[i];
  }

  for (int i = 0; i < n; i++)
    cout << arr[i] << endl;

  // 4. Sum
  double sum = 0;
  for (int i = 0; i < n; i++)
    sum += arr[i];
  cout << "Sum: " << sum << endl;

  // 5. Max value + index
  int index = 0;
  double maxValue = arr[0];
  for (int i = 1; i < n; i++)
  {
    if (arr[i] > maxValue)
    {
      maxValue = arr[i];
      index = i;
    }
  }
  cout << "Max value: " << maxValue << "at index: " << index << endl;
  return 0;
}

/* Result

Amount of numbers: 3
#0: 1
#1: 3
#2: 2
1
3
2
Sum: 6
Max value: 3at index: 1
*/
