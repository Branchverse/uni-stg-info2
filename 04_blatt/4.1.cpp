#include <iostream>
#include <string>
using namespace std;

struct address
{
  string street;
  int number;
};

struct mail
{
  address sender;
  address receiver;
  double weight;
};

int main()
{
  // 1.
  address ourObject;
  cout << "Give me the street name: ";
  cin >> ourObject.street;
  cout << "Give me the street number: ";
  cin >> ourObject.number;
  cout << "The address is: ";
  cout << ourObject.street << " " << ourObject.number << endl
       << endl;

  // 2.
  mail ourMail;
  cout << "Give me the sender's street name: ";
  cin >> ourMail.sender.street;
  cout << "Give me the sender's street number: ";
  cin >> ourMail.sender.number;
  cout << endl
       << "Give me the receiver's street name: ";
  cin >> ourMail.receiver.street;
  cout << "Give me the receiver's street number: ";
  cin >> ourMail.receiver.number;
  cout << endl
       << "Give me the weight of the mail: ";
  cin >> ourMail.weight;
  cout << endl;

  cout << "The mail is from: " << ourMail.sender.street << " " << ourMail.sender.number << endl;
  cout << "The mail is to: " << ourMail.receiver.street << " " << ourMail.receiver.number << endl;
  cout << "The mail weighs: " << ourMail.weight << endl;
}

/* Resulting Dialog

Give me the street name: str1
Give me the street number: 42069
The address is: str1 42069

Give me the sender's street name: str2
Give me the sender's street number: 42

Give me the receiver's street name: str3
Give me the receiver's street number: 69

Give me the weight of the mail: 42.69

The mail is from: str2 42
The mail is to: str3 69
The mail weighs: 42.69
*/