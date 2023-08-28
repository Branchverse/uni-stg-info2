// Include libraries
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
// using namespace means we do not have to type std::cout etc.
using namespace std; // Always end a code line with a semicolon (;)

// Functions (maybe look at this later, these are only the initializations)
int addValue(int x, int y); // Pass by value, returns an integer
int add(int &x, int &y);    // Pass by reference, meaning if we change x,y here the original gets changed to
int add(int *x, int *y);    // Pointer, the address of the variable is passed

int main() // Has to be int! return 0 for success and anything else for failure
{
  // Primitive types
  int a = 5;          // Integer, 4 bytes signed (can be negative)
  unsigned int b = 5; // Integer, 4 bytes unsigned (cannot be negative)
  short c = 5;        // Integer, 2 bytes signed
  double d = 5.5;     // Floating point, 8 bytes
  float e = 5.5f;     // Floating point, 4 bytes
  char f = 'a';       // Character, 1 byte
  bool g = true;      // Boolean, 1 byte

  // Complex types
  vector<int> vec;           // Vector of integers, size is not capped, vec.push_back(n) to add elements, needs <vector> library
  vec.size();                // Get the size of the vector
  vector<int> vec2(5);       // Vector of 5 integers
  vec2.push_back(9);         // => <0,0,0,0,0,9>
  vector<int> vec3(3, 5);    // Vector of 3 integers with value 5
  vector<int> vec4{1, 2, 3}; // Vector of 3 integers <1,2,3>

  // read more here: https://www.geeksforgeeks.org/initialize-a-vector-in-cpp-different-ways/

  int arr[5]; // Array of 5 integers, the size is capped at 5, no arr.push_back(n)
  // arr.size();    // This fails because arrays do not have a size() function

  string h = "abc"; // String, 32Bytes, the chars 'a','b','c' are stored elsewhere
  sizeof(a);        // Size of storage => 4
  h.size();         // String length, size is a member function of the string class

  // Reference and Pointer
  int x = 3, y = 5;
  int &ref = x;  // Reference, ref is now an alias for x, the type of ref is int&
  int *ptr = &y; // Pointer, ptr is now the address of y, the type of ptr is int*
  ref = 5;       // x is now 5
  *ptr = 7;      // y is now 7
  // The following outputs: 5 7 5 7 0x7fffffffd8dc (the address can be anything looking like this)
  cout << x << " " << y << " " << ref << " " << *ptr << " " << ptr << endl;

  // Functions
  // Called via their name and parameters
  // name: sizeof, parameter: a (meaning the variable a is passed to the function)
  // If the function returns something, that value is placed exactly where the function is called
  // See below main for examples
  // Functions can be overloaded, see the following 2 calls are different functions because of the param types
  x = 5;
  y = 6;
  cout << add(&x, &y) << endl;   // 11 => Calls the second add => we pass references so we can use pointers
  cout << add(x, y) << endl;     // 3 => Calls the first add
  cout << x << " " << y << endl; // 1 2

  // Loops
  // For loop
  for (int i = 0; i < 10; i++) // initiate; condition; increment
  {
    cout << i; // => 0123456789
  }
  cout << endl;

  // Looping to print vector stuff
  for (int i = 0; i < vec.size(); i++)
  {
    cout << vec[i] << endl;
  }

  // While loop
  int i = 0;     // initiate before
  while (i < 10) // does not repeat if i is 10 or bigger
  {
    cout << i; // => 0123456789
    i++;       // increment inside
  }
  cout << endl;

  // Do-While loop
  int j = 0; // initiate before
  do         // guarantees this is done at least once before the condition is checked
  {
    cout << j; // => 0123456789
    j++;       // increment inside
  } while (j < 10);
  cout << endl;

  // If-Else
  if (x == 5)
    cout << "x is 5" << endl;
  else if (x == 6) // Only gets called if the first if is false and x==6
    cout << "x is 6" << endl;
  else // Always called if none of the above ifs are true
    cout << "x is not 5 or 6" << endl;
  if (x == 1) // Is a new if statement, has nothing to do with the aboves
    cout << "x is checked again" << endl;

  // Switch
  switch (x) // Switches on the value of x
  {
  case 1: // If x==1
    cout << "x is 1" << endl;
    break; // Breaks out of the switch
  case 2:  // If x==2
    cout << "x is 2" << endl;
    break;
  default: // If none of the above
    cout << "x is not 1 or 2" << endl;
    break;
  }

  // Structured stuff (also look at this later maybe)
  struct Person
  {
    string name;
    int age;
  };         // SEMICOLON!
  Person p1; // Create a new Person object, no constructor is called, we just have dot notation
  p1.name = "Max";
  p1.age = 20;

  class PersonClass
  {
  private: // Access specifier, private means only accessible from within the class
    int IBAN = 69;

  public: // Access specifier, public means everyone can access it from outside
    string name;
    int age;
    PersonClass(string name, int age) // Constructor, called when we create a new PersonClass
    {
      this->name = name; // this->name means the name of the class, name means the parameter
      this->age = age;
    }
    void print() // Member function, can be called via the class
    {            // Here we can access IBAN
      cout << "Name: " << name << ", Age: " << age << ", IBAN: " << IBAN << endl;
    }
  }; // SEMICOLON!

  PersonClass p2("Max", 20); // Create a new PersonClass object, calls the constructor
  // p.IBAN;   // This throws a compile error because IBAN is private
  p2.print(); // Calls the print function of the PersonClass

  // Read from console and store in a

  // Reading from file
  ifstream fileIn("filename.txt"); // Open file
  if (!fileIn.good())              // checks if file is open and has more lines to read
    return 0;
  string word;
  fileIn >> word;       // Reads a word (terminates on spaces)
  fileIn.close();       // Close file
  cout << word << endl; // => Hello

  // Writing to file
  ofstream fileOut("filename.txt");
  fileOut << "Hello World" << endl; // Writes to file

  // Console
  cout << "Enter a number: "; // Writes to console
  cin >> a;
}

// As you can see the functions can be initialized before main, and defined after main
int addValue(int x, int y) // Pass by value, returns an integer
{
  return x + y; // return statement is needed, else the compiler might complain
}
int add(int &x, int &y) // Pass by reference, meaning if we change x,y here the original gets changed to
{
  x = 1;
  y = 2;
  return x + y; // Means this will always return 3 and the input variables will be 1 and 2
}
int add(int *x, int *y) // Pointer, it is the address of the variable
{
  // x = 1; => this fails, because <int*> and <int> are different types
  *x = 5;         // We can replace the originals value as well by dereferencing
  return *x + *y; // Dereference the pointer to get the value
}

/* Entire files output
5 7 5 7 0x7fffffffd3dc
11
3
1 2
0123456789
0123456789
0123456789
x is not 5 or 6
x is checked again
x is 1
Name: Max, Age: 20, IBAN: 69
Hello
Enter a number: 3 <= This was an input
*/
