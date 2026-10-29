#include <iostream>


using namespace std;

int main()
{

    char gender_code;


	cout << " Please enter Gender Code" << gender_code<< endl;
	cin >> gender_code;


	if ((gender_code == 'F') ||(gender_code == 'f') )
    {
		cout << "She is a female"<< endl;
	}
	 else if ((gender_code) == 'M'||(gender_code == 'm'))
	{
		cout << "He is a male" << endl;
	} else {
	 cout << "Invalid Code"<< endl;
	}
	return 0;
}
