#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int main()
{
  // Variables
  double weight, height, bmi;
  string category; // This is very similar to a char array, but it's without length limitation

  // Input
  printf("Please give me your weight in kg: "); // printf is similar to cout from <cstdio>, this is just an example, the other files will stay with cout. It has some capabilities like filling in variables
  cin >> weight;
  printf("Please give me your height in meters (e.g. 1.8): ");
  cin >> height;

  // Conversion
  if (height > 50)
  {
    printf("You are too tall for this program!\n");
    printf("Just kidding imma convert that stuff in meters assuming u gave me centimeters\n");
    height /= 100;
  }

  // Value checks
  if (height > 2.5 || height < 1.0 || weight > 250 || weight < 25)
  {
    printf("You are either too tall, short, fat, skinny for this program!\n");
    return 1;
  }

  // Calculation
  bmi = weight / pow(height, 2);

  // Category analysis
  if (bmi < 16)
  {
    category = "You are severely underweight";
  }
  else if (bmi < 18.5)
  {
    category = "You are underweight";
  }
  else if (bmi < 25)
  {
    category = "You are normal";
  }
  else if (bmi < 30)
  {
    category = "You are slightly overweight";
  }
  else if (bmi < 35)
  {
    category = "You are moderately obese";
  }
  else if (bmi < 40)
  {
    category = "You are severely obese";
  }
  else if (bmi < 100)
  {
    category = "Bro what?";
  }
  else
  {
    category = "You are most certainly a rhino";
  }

  printf("Your BMI is: %f\n", bmi);
  printf("Which means: %s\n", category.c_str()); // Coz we need to convert the string to a char array
  return 0;
}

/* Resulting Dialog

Please give me your weight in kg: 100
Please give me your height in meters (e.g. 1.8): 180
You are too tall for this program!
Just kidding imma convert that stuff in meters assuming u gave me centimeters
Your BMI is: 30.864198
Which means: You are moderately obese

Please give me your weight in kg: 333
Please give me your height in meters (e.g. 1.8): 1.8
You are either too tall, short, fat, skinny for this program!
*/