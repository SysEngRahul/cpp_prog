#include<iostream>
using namespace std;

int main()
{
  int a;
  cout << "enter the number:";
  cin >> a;
  
  if(a%2 ==0)
     cout << "your number is even!" << endl;
  else
      cout << "your number is odd!" << endl;
  system("pause");
  return 0;
}
