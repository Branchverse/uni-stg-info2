int factorial(int number)
{
  int iteration, factorial = 1;
  for (iteration = 1; iteration <= number; iteration++)
  {
    factorial = factorial * iteration; // This goes from 1 to the number we set and keeps multiplying => 1*2*3*4*5
  }
  return factorial;
}