#include <iostream>

using namespace std;

int main()
{

    int num1;
    int num2;

	cout << " Please enter Number 1" << num1<< endl;
	cin >> num1;
	cout << " Please enter Number 2" << num2 << endl;
	cin >> num2;

	if (num1 % 2== 0)
    {
		cout << "Number 1 is even"<< endl;
	}
	 else if (num2 % 2 == 0)
	{
		cout << "Number 2 is even" << endl;
	} else {
	 cout << "both numbers are not Even"<< endl;
	}
	return 0;
}
