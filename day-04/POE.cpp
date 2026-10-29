#include <iostream>
#include <cstdlib>
#include <ctime>
 using namespace std;

 void getinput(int &num1,int &num2);
 void generateValues(int &num1, int &num2);
 int calcSum(int num1,int num2);
 int calcproduct(int num1,int num2);
 int calcDiff(int num1,int num2);
 double calcquotient(int num1,int num2);


 int main()
 {
   int n1,n2;
   n1 = rand()% 50 +1;
   n2 = rand()% 50 +1;

  char oper_choice;

  cout << "Please enter The operator" << endl;
  cin >> oper_choice;
   cout<< n1<< " and " <<n2<<endl;

  switch (oper_choice)
  {
  case '*':
     cout << "The product of the 2 numbers  =  " << calcproduct(n1,n2) << endl;
    break;

  case '+':
     cout << "The total of the 2 numbers  =  " << calcSum(n1,n2) << endl;
    break;
  case '-':
     cout << "The difference of the 2 numbers  =  " << calcDiff(n1,n2) << endl;
    break;

  case '/':
    cout << "The Quotient of the 2 numbers  =  " << calcquotient(n1,n2) << endl;
   break;

   default:
    cout << "Invalid Code"<< endl;


 }
 return 0;
 }
int calcSum(int num1,int num2)
{

  return num1 + num2 ;

}

int calcproduct(int num1,int num2)
{

  return num1 * num2 ;

}

double calcquotient(int num1,int num2)
{

  return num1 / num2;

}

int calcDiff(int num1,int num2)
{

  return num1 - num2 ;

}






