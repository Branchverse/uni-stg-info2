#include <iostream>    // Header File, includes code from somewhere else
#include "factorial.h" // A self written file we can include

using namespace std; // Namespace, allows you to use cout and cin without std::cout

#include <string> // Strings are char arrays

int main() // Declare the main function (executed on start) as type `int`, meaning it returns a number after its done
{
  // Numbers
  int a = 5;
  int b = 10;
  int c = a + b;

  // Output
  // std::cout << c << std::endl;
  cout << c << endl; // Same as above, since we used `using namespace std;` earlier

  // Strings
  string greeting = "Hello"; // Risky because u never know how much memory they use

  // Array of chars like: ['P', 'e', 'r', 'f', 'e', 'c', 't', '\0']
  char string1[8] = "Perfect"; // Allocated 8 chars in memory
  // char string2[8] = "Way too long";

  // Pointers and references
  // Pointers are like arrows pointing to a memory address
  int value = 5;
  int alsoValue = value; // This is a copy of the value, not a reference

  int *pointer = &value; // Pointer to the memory address of `value`
  // int *pointer = a; // This is not allowed, since we need to use the `&` operator to get the memory address of `value`
  int &reference = value; // Reference to the value of `value`

  cout << "Pointer: " << pointer << endl;
  cout << "Reference: " << reference << endl;
  cout << "Value of value: " << value << endl;
  // Changing value
  value = 10;
  cout << "Pointer: " << pointer << endl;               // This is still the same address
  cout << "Reference: " << reference << endl;           // This is now 10
  cout << "Value of value: " << value << endl;          // This is now 10
  cout << "Value of alsoValue: " << alsoValue << endl;  // This is still 5
  cout << "Value behind pointer: " << *pointer << endl; // This is the value that is pointed at

  // Functions and includes
  int number = factorial(5); // Calls the factorial function from factorial.h => using extra files and functions to reduce code bloat and duplication
  cout << number << endl;    // Prints the factorial

  // Classes and Objects
  // A Class is a blueprint for an object, and the object an Instanziation of such class
  class MyClass
  {                  // The class
  public:            // Access specifier => public is available from the outside of the class, private would only be usable inside
    int myNum;       // Attribute (int variable)
    string myString; // Attribute (string variable)
  };

  MyClass myObj; // Create an object of MyClass
  myObj.myNum = 15;
  myObj.myString = "Some text";
  cout << myObj.myNum << endl;
  cout << myObj.myString << endl;
  // cout << myObj << endl; // So this doesn't work => because we can only print strings, and an Object is not a string, there are fked up solutions to this, but lets not care about em

  // Input
  char scin[100];              // Initialize 100 chars without setting the values yet
  std::cin.getline(scin, 100); // Pauses the program until you type something and press enter, stores at max 100chars in ur allocated `scin` variable
  std::cout << scin << endl;   // Prints the chars you typed

  return 0; // Returns a value to conclude the function, we have to return a number here, such as 0, since our declared `main` function is of type `int`
}