#include <iostream>
#include <cmath>
using namespace std;

double getBMI(double weight, double height)
{
  return weight / pow(height, 2);
}

string getBMI_text(double bmi)
{
  // Again we can leave out the {} since those are one liners
  if (bmi < 16)
    return "You are severely underweight";
  else if (bmi < 18.5)
    return "You are underweight";
  else if (bmi < 25)
    return "You are normal";
  else if (bmi < 30)
    return "You are slightly overweight";
  else if (bmi < 35)
    return "You are moderately obese";
  else if (bmi < 40)
    return "You are severely obese";
  else if (bmi < 100)
    return "Bro what?";
  else
    return "You are most certainly a rhino";
}

int main()
{
  // 1.
  double weight, height, bmi;
  cout << "Please give me your weight in kg: ";
  cin >> weight;
  cout << "Please give me your height in meters (e.g. 1.8): ";
  cin >> height;

  bmi = getBMI(weight, height);
  cout << "Your BMI is " << bmi << endl;

  // 2.

  string text = getBMI_text(bmi);
  cout << text << endl;
}

/* Resulting Dialog

Please give me your weight in kg: 42
Please give me your height in meters (e.g. 1.8): 0.69
Your BMI is 88.2168
Bro what?
*/