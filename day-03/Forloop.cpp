#include <iostream>


using namespace std;

int main()
{

    int i = 1;
    int num;
    int sum = 0;
    float average = 0;

do
{
  cout << " Please enter a number "<< i << " :" ;
  cin >> num;
  if (num > 0 && num < 50)
  {
      sum += num;
  } else {
  cout << " Please enter a number"<< i << endl;
  i--;
  }

   i++;
} while (i <= 5);

cout << "The sum is "<< sum << endl;
average = sum / (i-1);
cout << "The Average is " << average << endl;

return 0;

}
