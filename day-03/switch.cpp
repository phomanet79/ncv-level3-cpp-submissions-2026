#include <iostream>


using namespace std;

int main()
{
char gender_code;
string message1 = "She is a female";
string message2 = "He is a male";

cout << " Please enter Gender Code" << gender_code<< endl;
cin >> gender_code;

switch (gender_code)
{
  case 'm':
  case 'M':
    cout << message2 << endl;
  break;
  case 'f':
  case 'F':
    cout << message1 << endl;
  break;
  default:
    cout << "Invalid Code"<< endl;
}
    return 0;
}
