#include <iostream>
#include <vector>
#include <string>
#include <numeric>
#include <algorithm>
using namespace std;

struct animalType
{
  string name;
  int amount;
};
struct zoo
{
  string name;
  vector<animalType> types;
};
void printType(animalType type)
{
  cout << type.name << ": " << type.amount << endl;
}
int countAnimals(zoo zoo)
{
  int sum = 0;
  for (int i = 0; i < zoo.types.size(); i++)
  {
    sum += zoo.types[i].amount;
  }

  // Or with accumulate:
  // int sum2 = accumulate(zoo.types.begin(), zoo.types.end(), 0, [](int accumulator, animalType type)
  //                       { return accumulator + type.amount; });
  // cout << "Sum2: " << sum2 << endl;
  return sum;
}
void printZoo(zoo zoo)
{
  cout << zoo.name << ": " << zoo.types.size() << " different types" << endl;

  for (int i = 0; i < zoo.types.size(); i++)
  {
    printType(zoo.types[i]);
  }

  // Or with for each:
  // for_each(zoo.types.begin(), zoo.types.end(), [](animalType type)
  //          { printType(type); });

  int sum;
  sum = countAnimals(zoo);
  cout << "Sum: " << sum << endl;
}

animalType addType()
{
  animalType type;
  cout << "Enter name of new type: ";
  cin >> type.name;
  cout << "Enter amount of new type: ";
  cin >> type.amount;
  return type;
}
zoo addZoo()
{
  zoo newZoo;
  int size;
  cout << "Enter name of new zoo: ";
  cin >> newZoo.name;
  cout << "How many animalTypes: ";
  cin >> size;
  newZoo.types = vector<animalType>(size);

  for (int i = 0; i < newZoo.types.size(); i++)
  {
    newZoo.types[i] = addType();
  }
  return newZoo;
}

// The following 2 functions are overloads, the compiler will register with which type
// they are called and separates them accordingly
// This is usally used to allow more config inputs, lets say we allow 2 or 3 inputs to specify
// which animal escapes and how many of those.
// void escape(zoo &zoo, int indexOfAnimal) => e.g. half only animal at index i in zoo.types
// void escape(zoo &zoo, int indexOfAnimal, int amount) => e.g reduce that animal amount by a certain number

void escape(animalType &type)
{
  type.amount /= 2;
}
void escape(zoo &zoo)
{
  for (int i = 0; i < zoo.types.size(); i++)
  {
    escape(zoo.types[i]);
  }
}

int main()
{
  zoo zoo = addZoo();
  cout << endl;

  printZoo(zoo);
  cout << endl;

  escape(zoo);
  cout << endl;
  cout << "After escape:" << endl;
  printZoo(zoo);
}

/* Resulting Dialog

Enter name of new zoo: myZoo
How many animalTypes: 3
Enter name of new type: name1
Enter amount of new type: 3
Enter name of new type: name2
Enter amount of new type: 4
Enter name of new type: name3
Enter amount of new type: 7

myZoo: 3 different types
name1: 3
name2: 4
name3: 7
Sum: 14


After escape:
myZoo: 3 different types
name1: 1
name2: 2
name3: 3
Sum: 6
*/