#include <iostream>
using namespace std;

const int N = 50;

class Car
{
public:
  char name;
  int position;
  int speed;
  void print();
  void move();
  Car(char n = '*', int p = 0, int s = 0);
};

void Car::print()
{
  cout << "Name: " << name << ", position: " << position << ", speed: " << speed << endl;
}

void Car::move()
{
  position += speed;
  position %= N;
}

Car::Car(char n, int p, int s)
{
  this->name = n;
  this->position = p;
  this->speed = s;
}

int main()
{
  // 5.
  Car car1('B', 2, 7);
  // Car car1 = {'B', 2, 7}; // C++11+ only
  car1.print();

  for (int i = 0; i < 10; i++)
  {
    car1.move();
    car1.print();
  }
}

/* Results
Name: B, position: 2, speed: 7
Name: B, position: 9, speed: 7
Name: B, position: 16, speed: 7
Name: B, position: 23, speed: 7
Name: B, position: 30, speed: 7
Name: B, position: 37, speed: 7
Name: B, position: 44, speed: 7
Name: B, position: 1, speed: 7
Name: B, position: 8, speed: 7
Name: B, position: 15, speed: 7
Name: B, position: 22, speed: 7
*/
