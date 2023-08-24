#include <iostream>
#include <vector>
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
  name = n;
  position = p;
  speed = s;
}

// 1.
class Street
{
public:
  vector<Car> cars;
  size_t firstCar(); // size_t is an unsigned integer, meaning no negatives
  void print1();
  void print2();
  void move();
};

// 3.
size_t Street::firstCar()
{
  size_t first = 0;
  for (size_t i = 1; i < cars.size(); i++)
    if (cars[i].position < cars[first].position)
      first = i;
  return first;
}

// 4.
void Street::print1()
{
  size_t first = firstCar();
  for (size_t i = 0; i < cars.size(); i++)
    cars[(i + first) % cars.size()].print();
}

// 5.
void Street::print2()
{
  int first = firstCar();
  int carIndex = first;
  for (int i = 0; i < N; i++)
  {
    if (cars[carIndex].position == i)
    {
      cout << cars[carIndex].name << "-ō͡≡o˞̶.";
      carIndex++;
      carIndex %= cars.size();
    }
    else
      cout << '.';
  }
  cout << endl;
}

// 6.
void Street::move()
{
  for (size_t i = 0; i < cars.size(); i++)
    cars[i].move();
}

int main()
{
  // 2.
  Street street;
  for (char c = 'A'; c != 'J' + 1; c++)
    street.cars.push_back(Car(c, (c - 'A') * 2, 7));

  street.print1();

  for (int i = 0; i < 6; i++)
  {
    street.move();
    street.print2();
  }
}

/* Results (Note that ur console might not print Ascii correctly making it look like there are 2 dots between cars)
Name: A, position: 0, speed: 7
Name: B, position: 2, speed: 7
Name: C, position: 4, speed: 7
Name: D, position: 6, speed: 7
Name: E, position: 8, speed: 7
Name: F, position: 10, speed: 7
Name: G, position: 12, speed: 7
Name: H, position: 14, speed: 7
Name: I, position: 16, speed: 7
Name: J, position: 18, speed: 7
.......A-ō͡≡o˞̶..B-ō͡≡o˞̶..C-ō͡≡o˞̶..D-ō͡≡o˞̶..E-ō͡≡o˞̶..F-ō͡≡o˞̶..G-ō͡≡o˞̶..H-ō͡≡o˞̶..I-ō͡≡o˞̶..J-ō͡≡o˞̶.........................
..............A-ō͡≡o˞̶..B-ō͡≡o˞̶..C-ō͡≡o˞̶..D-ō͡≡o˞̶..E-ō͡≡o˞̶..F-ō͡≡o˞̶..G-ō͡≡o˞̶..H-ō͡≡o˞̶..I-ō͡≡o˞̶..J-ō͡≡o˞̶..................
.....................A-ō͡≡o˞̶..B-ō͡≡o˞̶..C-ō͡≡o˞̶..D-ō͡≡o˞̶..E-ō͡≡o˞̶..F-ō͡≡o˞̶..G-ō͡≡o˞̶..H-ō͡≡o˞̶..I-ō͡≡o˞̶..J-ō͡≡o˞̶...........
............................A-ō͡≡o˞̶..B-ō͡≡o˞̶..C-ō͡≡o˞̶..D-ō͡≡o˞̶..E-ō͡≡o˞̶..F-ō͡≡o˞̶..G-ō͡≡o˞̶..H-ō͡≡o˞̶..I-ō͡≡o˞̶..J-ō͡≡o˞̶....
.I-ō͡≡o˞̶..J-ō͡≡o˞̶................................A-ō͡≡o˞̶..B-ō͡≡o˞̶..C-ō͡≡o˞̶..D-ō͡≡o˞̶..E-ō͡≡o˞̶..F-ō͡≡o˞̶..G-ō͡≡o˞̶..H-ō͡≡o˞̶.
E-ō͡≡o˞̶..F-ō͡≡o˞̶..G-ō͡≡o˞̶..H-ō͡≡o˞̶..I-ō͡≡o˞̶..J-ō͡≡o˞̶................................A-ō͡≡o˞̶..B-ō͡≡o˞̶..C-ō͡≡o˞̶..D-ō͡≡o˞̶..
*/
