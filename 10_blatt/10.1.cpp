#include <iostream>
using namespace std;

// 1.
const int N = 50; // const means unchangeable, global coz it is outside of any scope

// 2.
class car
{
public: // From outside accessable
  char name;
  int position;
  int speed;
};

// 3.
void print(car &car)
{
  cout << "Name: " << car.name << ", position: " << car.position << ", speed: " << car.speed << endl;
}

// 4.
void move(car &car)
{
  car.position += car.speed;
  car.position %= N;
}

int main()
{
  // 5.
  car car1 = {'B', 2, 7};
  print(car1);

  for (int i = 0; i < 10; i++)
  {
    move(car1);
    print(car1);
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